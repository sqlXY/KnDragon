/*初始化函数 

void initChar();//初始化角色 

*/
#ifndef _INITF_H_
#define _INITF_H_

//初始化角色 
void initChar() {
	char name[20];
	printf("请输入勇士的姓名:"); 
	scanf("%s", name);
	strcpy(me.name, name);
	me.HP = initHP;
	me.exp = 10;
	me.weapon = initWeapon;
	me.drug = initDrug;
	me.level = 1;
	me.money = initMoney;
} 

#endif
