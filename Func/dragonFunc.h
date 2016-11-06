/*打怪练级函数 

void fuckDragon();//屠龙 

*/
#ifndef _DRAGONF_H_
#define _DRAGONF_H_

//屠龙系统
void fuckDragon() {
	system("cls");
	int HP, attack;
	int select;
	srand((unsigned)time(NULL));
	HP = dragonHP;
	printf("这是最后一战！去吧，勇士！\n");
	while(1) {
		attack = (rand() % 99 + 1) * 5;
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
				printf("哈！对龙造成了%d点伤害！\n", me.weapon.attack);
			} else {
				system("cls");
				printf("赢了！你成功消灭了恶龙！\n你的名字将被人们铭记...%s", me.name);
				scanf("%*c");
				exit(0);
			}
			if(me.HP > attack) {
				me.HP -= attack;
				printf("啊！你受到了%d点伤害！你还有%d点血!\n", attack, me.HP);
			} else {
				printf("你死了！GAMEOVER！\n");
				scanf("%*c%*c");
				exit(0);
			}
		}
	}
	return; 
}

#endif
