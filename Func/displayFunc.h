/*信息显示函数

void disChar();//显示角色信息 
void disWeapons();//显示武器信息 
void disDrugs();//显示药品信息 

*/

#ifndef _DISPLAYF_H_   
#define _DISPLAYF_H_ 

//人物属性显示
void disChar() {
	system("cls");
	printf("姓名：%s\n", me.name);
	printf("等级：%d\n", me.level);
	printf("经验：%d\n", me.exp);
	printf("血量：%d\n", me.HP);
	printf("武器：%s\n", me.weapon.name);
	printf("药品：%s\n", me.drug.name);
	printf("金钱：%d\n", me.money);
	printf("\n 按回车返回");
	scanf("%*c%*c"); //回车返回 
	return;
}

//显示所有武器
void disWeapons() {
	int i = -1;
	while(++i < weaponCount) {
		printf("%d %d星级武器\t%s\t\t%d元\n", i, weapons[i].level, weapons[i].name,
										 	  weapons[i].money);
	}
	return;
}

//显示所有药
void disDrugs() {
	int i = -1;
	while(++i < drugCount) {
		printf("%d %d星级\t%s\t\t%d元\n", i, drugs[i].level, drugs[i].name,
										 	  drugs[i].money);
	}
	return;
}

#endif  
