/*�˵�����

void menu();		//���˵�
void gameSave();    //������Ϸ
void gameRead();	//��ȡ��Ϸ

*/

#ifndef _MENUF_H_   
#define _MENUF_H_

//���˵� 
void menu() {
	int select = 5;
	while(1) {
		system("cls");
		printf("************************\n");
		printf("\t��ս��ʿ\n"); 
		printf("************************\n");
		printf("* ��ã�%s��ʿ\n*\n",me.name);
		printf("* ����0 �˳�\n"
			   "* ����1 ��ʾ��������\n"
			   "* ����2 ��������\n"
			   "* ����3 �������\n"
			   "* ����4 �ҩ�̵�\n"
			   "* ����5 ����\n"
			   "* ����6 ������Ϸ\n"
			   "* ����7 ��ȡ��Ϸ\n");
		if(select > 7 || select < 0) printf("�ֵܣ��㵽�����ʲô����\n");
		printf("\n ��Ҫ:");
		scanf("%d", &select); 
		switch(select) {
			case 0 : printf("\n �ټ�! %s��ʿ!",me.name);break;
			case 1 : disChar();break; 
			case 2 : buyWeapon();break;
			case 3 : wildMonster();break;
			case 4 : buyDrug();break;
			case 5 : fuckDragon();break;
			case 6 : gameSave();break;
			case 7 : gameRead();break;
			//default : printf("��...���Ȼ�������������"); 
		}
		if(select == 0) break;
	}
}


//��ȡ��Ϸ
void gameRead() {
	system("cls");
	FILE *fp;
	int weaponId, drugId;
	if((fp = fopen(".\\KnDSave", "r")) == NULL) {
		printf("�浵�����ڻ����𻵣�\n"
			   "���س��������˵�");
		scanf("%*c%*c");
		fclose(fp);
		return;
	} else {
		fscanf(fp, "%s%d%d%d%d%d%d", me.name, &me.level, &me.exp, &me.HP, &weaponId, &drugId, &me.money);
		me.weapon = weapons[weaponId];
		me.drug = drugs[drugId];
		disChar(); //��ʾ��������
	}
	fclose(fp);
	return;
}


//������Ϸ
void gameSave() {
	system("cls");
	FILE *fp;
	int weaponId, drugId;
	int i;
	/*��ȡ��ǰ��������*/
	for(i = 0; i < weaponCount; i++)
		if(weapons[i].money == me.weapon.money){
			weaponId = i;
			break;
		}
	/*��ȡ��ǰҩƷ����*/
	for(i = 0; i < drugCount; i++)
		if(drugs[i].money == me.drug.money){
			drugId = i;
			break;
		}
	/*�浵*/
	if((fp = fopen(".\\KnDSave", "w")) == NULL) {
		printf("�޷��ڳ�������Ŀ¼�½����浵��ԭ�����Ϊ:\n\n"
			   "1.�浵�����������\n\n"
			   "2.û���޸Ĵ��ļ���Ȩ�ޣ��������C�̣���û����C�̽����ļ����޸��ļ���Ȩ�ޣ�\n\n"
			   "���س��������˵�");
		scanf("%*c%*c");
		fclose(fp);
		return;
	} else {
		fprintf(fp, "%s %d %d %d %d %d %d\n", me.name, me.level, me.exp, me.HP, weaponId, drugId, me.money);
		printf("�Ѵ浵�����س��������˵�");
		scanf("%*c%*c");
	}
	fclose(fp);
	return;
}

#endif 
