/*����������� 

void wildMonster();//������� 

*/
#ifndef _FIGHTF_H_
#define _FIGHTF_H_

//��Ұ��ϵͳ
void wildMonster() {
	system("cls");
	int level, HP, attack, exp, money;
	int select, flag = 0;
	srand((unsigned)time(NULL));
	level = rand() % 99 + 1;
	HP = level * 5;
	attack = level * 2;
	exp = level * 3;
	money = level * 10;
	printf("������һֻ%d����Ұ�֣�", level);
	while(1) {
		if(flag) break;
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
				printf("�����Եз������%d���˺���\n", me.weapon.attack);
			} else {
				printf("Ӯ�ˣ����%d�㾭�飬%d��Ǯ��\n���س�����", exp, money);
				me.exp += exp; 
				me.level = me.exp / 10;
				maxHP = level * 120 + initHP;
				me.HP += exp; 
				me.money += money;
				flag = 1;
				scanf("%*c%*c");
			}
			if(me.HP > attack) {
				me.HP -= attack;
				printf("�������ܵ���%d���˺����㻹��%d��Ѫ\n", attack, me.HP);
			} else {
				printf("�����ˣ�GAMEOVER��\n");
				exit(0);
			}
		}
	}
	menu();
}

#endif
