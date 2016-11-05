/*打怪练级函数 

void wildMonster();//打怪练级 

*/
#ifndef _FIGHTF_H_
#define _FIGHTF_H_

//打野怪系统
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
	printf("遇到了一只%d级的野怪！", level);
	while(1) {
		if(flag) break;
		printf("\n-1 逃跑\n1 攻击\n2 嗑药\n你想:");
		scanf("%d", &select);
		if(select != -1 && select != 1 && select != 2){
			printf("没有那个选项！\n"); 
		} else if(select == -1) {
			break;
		} else {
			if(select == 2){
				eatDrug();
			}else if(HP > me.weapon.attack) {
				HP -= me.weapon.attack;
				printf("哈！对敌方造成了%d点伤害！\n", me.weapon.attack);
			} else {
				printf("赢了！获得%d点经验，%d金钱！\n按回车返回", exp, money);
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
				printf("啊！你受到了%d点伤害！你还有%d点血\n", attack, me.HP);
			} else {
				printf("你死了！GAMEOVER！\n");
				exit(0);
			}
		}
	}
	menu();
}

#endif
