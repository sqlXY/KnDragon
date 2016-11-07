/*打怪练级函数 

void wildMonster();						//打怪练级
int randomLevel(); 						//随机生成怪物等级
Monster createMonster(int level);		//随机生成怪物

*/
#ifndef _FIGHTF_H_
#define _FIGHTF_H_

//打野怪系统
void wildMonster() {
	system("cls");
	int level = randomLevel();
	Monster monster = createMonster(level);
	int select, flag = 0;
	printf("遇到了一只%d级的%s！", level, monster.name);
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
			}else if(monster.HP > me.weapon.attack) {
				monster.HP -= me.weapon.attack;
				printf("哈！对敌方造成了%d点伤害！\n", me.weapon.attack);
			} else {
				printf("赢了！获得%d点经验，%d金钱！\n按回车返回", monster.exp, monster.money);
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
				printf("啊！你受到了%d点伤害！你还有%d点血\n", monster.attack, me.HP);
			} else {
				printf("你死了！GAMEOVER！\n");
				exit(0);
			}
		}
	}
	return;
}


//随机生成怪物等级
int randomLevel() {
	int level = 200;
	//printf("开始生成等级\n");
	srand((unsigned)time(NULL));
	/*允许生成与骑士等级上下相差15级以内的怪物*/
	while(level < me.level - 15 || level > me.level + 15) {
		level = (level + rand()) % 99 + 1;
	}
	//printf("已生成等级:%d\n",level);
	return level;
}


//随机生成怪物
Monster createMonster(int level) {
	int select,i;
	//printf("开始生成怪物\n");
	Monster thisMonster;
	srand((unsigned)time(NULL));
	do {
		select = (select + rand()) % monsterCount;
		//printf("选择第%d个\n",select);
		//printf("已生成等级:%d\n",level);
	}while(monsters[select].minLevel > level || monsters[select].maxLevel < level);
	thisMonster = monsters[select];
	/*开始随成长等级成长*/
	for(i = 0; i < level - thisMonster.minLevel; i++) {
		thisMonster.HP *= 1 + thisMonster.ratio;
		thisMonster.attack *= 1 + thisMonster.ratio;
		thisMonster.exp *= 1 + thisMonster.ratio;
		thisMonster.money *= 1 + thisMonster.ratio;
	}
	//printf("已生成怪物\n");
	return thisMonster;
}

#endif
