/*����������� 

void wildMonster();						//�������
int randomLevel(); 						//������ɹ���ȼ�
Monster createMonster(int level);		//������ɹ���

*/
#ifndef _FIGHTF_H_
#define _FIGHTF_H_

//��Ұ��ϵͳ
void wildMonster() {
	system("cls");
	int level = randomLevel();
	Monster monster = createMonster(level);
	int select, flag = 0;
	printf("������һֻ%d����%s��", level, monster.name);
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
			}else if(monster.HP > me.weapon.attack) {
				monster.HP -= me.weapon.attack;
				printf("�����Եз������%d���˺���\n", me.weapon.attack);
			} else {
				printf("Ӯ�ˣ����%d�㾭�飬%d��Ǯ��\n���س�����", monster.exp, monster.money);
				me.exp += monster.exp; 
				me.level = me.exp / 10;
				maxHP = level * 120 + initHP;
				me.HP += monster.exp; 
				me.money += monster.money;
				flag = 1;
				scanf("%*c%*c");
			}
			if(me.HP > monster.attack) {
				me.HP -= monster.attack;
				printf("�������ܵ���%d���˺����㻹��%d��Ѫ\n", monster.attack, me.HP);
			} else {
				printf("�����ˣ�GAMEOVER��\n");
				exit(0);
			}
		}
	}
	return;
}


//������ɹ���ȼ�
int randomLevel() {
	int level = 200;
	//printf("��ʼ���ɵȼ�\n");
	srand((unsigned)time(NULL));
	/*������������ʿ�ȼ��������15�����ڵĹ���*/
	while(level < me.level - 15 || level > me.level + 15) {
		level = (level + rand()) % 99 + 1;
	}
	//printf("�����ɵȼ�:%d\n",level);
	return level;
}


//������ɹ���
Monster createMonster(int level) {
	int select,i;
	//printf("��ʼ���ɹ���\n");
	Monster thisMonster;
	srand((unsigned)time(NULL));
	do {
		select = (select + rand()) % monsterCount;
		//printf("ѡ���%d��\n",select);
		//printf("�����ɵȼ�:%d\n",level);
	}while(monsters[select].minLevel > level || monsters[select].maxLevel < level);
	thisMonster = monsters[select];
	/*��ʼ��ɳ��ȼ��ɳ�*/
	for(i = 0; i < level - thisMonster.minLevel; i++) {
		thisMonster.HP *= 1 + thisMonster.ratio;
		thisMonster.attack *= 1 + thisMonster.ratio;
		thisMonster.exp *= 1 + thisMonster.ratio;
		thisMonster.money *= 1 + thisMonster.ratio;
	}
	//printf("�����ɹ���\n");
	return thisMonster;
}

#endif
