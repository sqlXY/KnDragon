/*����������� 

void fuckDragon();//���� 

*/
#ifndef _DRAGONF_H_
#define _DRAGONF_H_

//����ϵͳ
void fuckDragon() {
	system("cls");
	int HP, attack;
	int select;
	srand((unsigned)time(NULL));
	HP = dragonHP;
	printf("�������һս��ȥ�ɣ���ʿ��\n");
	while(1) {
		attack = (rand() % 99 + 1) * 5;
		printf("\n-1 ����\n1 ����\n2 �ҩ\n����:");
		scanf("%d", &select);
		if(select != -1 && select != 1 && select != 2){
			printf("û���Ǹ�ѡ�\n"); 
		} else if(select == -1) {
			break;
		} else {
			if(select == 2){
				eatDrug();
			}else if(HP > me.weapon.attack) {
				HP -= me.weapon.attack;
				printf("�������������%d���˺���\n", me.weapon.attack);
			} else {
				system("cls");
				printf("Ӯ�ˣ���ɹ������˶�����\n������ֽ�����������...%s", me.name);
				scanf("%*c");
				exit(0);
			}
			if(me.HP > attack) {
				me.HP -= attack;
				printf("�������ܵ���%d���˺����㻹��%d��Ѫ!\n", attack, me.HP);
			} else {
				printf("�����ˣ�GAMEOVER��\n");
				scanf("%*c%*c");
				exit(0);
			}
		}
	}
	return; 
}

#endif
