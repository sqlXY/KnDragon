/*菜单函数

void menu();//主菜单 

*/

#ifndef _MENUF_H_   
#define _MENUF_H_

//主菜单 
void menu() {
	system("cls");
	int select;
	printf("************************\n");
	printf("\t龙战骑士\n"); 
	printf("************************\n");
	printf("* %s骑士\n*\n",me.name);
	printf("* 输入0 退出\n* 输入1 显示人物属性\n* 输入2 购买武器\n* 输入3 打怪练级\n* 输入4 嗑药商店\n* 输入5 屠龙\n");
	printf("\n 你要:");
	scanf("%d", &select); 
	switch(select) {
		case 0 : printf("\n %s!胆小鬼!",me.name);exit(0);break;
		case 1 : disChar();break; 
		case 2 : buyWeapon();break;
		case 3 : wildMonster();break;
		case 4 : buyDrug();break;
		case 5 : fuckDragon();break;
		default : printf("你...你居然打破了世界规则！"); 
	}
}

#endif 
