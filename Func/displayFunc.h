/*��Ϣ��ʾ����

void disChar();//��ʾ��ɫ��Ϣ 
void disWeapons();//��ʾ������Ϣ 
void disDrugs();//��ʾҩƷ��Ϣ 

*/

#ifndef _DISPLAYF_H_   
#define _DISPLAYF_H_ 

//����������ʾ
void disChar() {
	system("cls");
	printf("������%s\n", me.name);
	printf("�ȼ���%d\n", me.level);
	printf("���飺%d\n", me.exp);
	printf("Ѫ����%d\n", me.HP);
	printf("������%s\n", me.weapon.name);
	printf("ҩƷ��%s\n", me.drug.name);
	printf("��Ǯ��%d\n", me.money);
	printf("\n ���س�����");
	scanf("%*c%*c"); //�س����� 
	return;
}

//��ʾ��������
void disWeapons() {
	int i = -1;
	while(++i < weaponCount) {
		printf("%d %d�Ǽ�����\t%s\t\t%dԪ\n", i, weapons[i].level, weapons[i].name,
										 	  weapons[i].money);
	}
	return;
}

//��ʾ����ҩ
void disDrugs() {
	int i = -1;
	while(++i < drugCount) {
		printf("%d %d�Ǽ�\t%s\t\t%dԪ\n", i, drugs[i].level, drugs[i].name,
										 	  drugs[i].money);
	}
	return;
}

#endif  
