/*菜单函数

void menu();		//主菜单
void gameSave();    //储存游戏
void gameRead();	//读取游戏

*/

#ifndef _MENUF_H_   
#define _MENUF_H_

//主菜单 
void menu() {
	int select = 5;
	while(1) {
		system("cls");
		printf("************************\n");
		printf("\t龙战骑士\n"); 
		printf("************************\n");
		printf("* 你好，%s骑士\n*\n",me.name);
		printf("* 输入0 退出\n"
			   "* 输入1 显示人物属性\n"
			   "* 输入2 购买武器\n"
			   "* 输入3 打怪练级\n"
			   "* 输入4 嗑药商店\n"
			   "* 输入5 屠龙\n"
			   "* 输入6 储存游戏\n"
			   "* 输入7 读取游戏\n");
		if(select > 7 || select < 0) printf("兄弟，你到底想干什么啊？\n");
		printf("\n 你要:");
		scanf("%d", &select); 
		switch(select) {
			case 0 : printf("\n 再见! %s骑士!",me.name);break;
			case 1 : disChar();break; 
			case 2 : buyWeapon();break;
			case 3 : wildMonster();break;
			case 4 : buyDrug();break;
			case 5 : fuckDragon();break;
			case 6 : gameSave();break;
			case 7 : gameRead();break;
			//default : printf("你...你居然打破了世界规则！"); 
		}
		if(select == 0) break;
	}
}


//读取游戏
void gameRead() {
	system("cls");
	FILE *fp;
	int weaponId, drugId;
	if((fp = fopen(".\\KnDSave", "r")) == NULL) {
		printf("存档不存在或已损坏！\n"
			   "按回车返回主菜单");
		scanf("%*c%*c");
		fclose(fp);
		return;
	} else {
		fscanf(fp, "%s%d%d%d%d%d%d", me.name, &me.level, &me.exp, &me.HP, &weaponId, &drugId, &me.money);
		me.weapon = weapons[weaponId];
		me.drug = drugs[drugId];
		disChar(); //显示人物属性
	}
	fclose(fp);
	return;
}


//储存游戏
void gameSave() {
	system("cls");
	FILE *fp;
	int weaponId, drugId;
	int i;
	/*获取当前武器索引*/
	for(i = 0; i < weaponCount; i++)
		if(weapons[i].money == me.weapon.money){
			weaponId = i;
			break;
		}
	/*获取当前药品索引*/
	for(i = 0; i < drugCount; i++)
		if(drugs[i].money == me.drug.money){
			drugId = i;
			break;
		}
	/*存档*/
	if((fp = fopen(".\\KnDSave", "w")) == NULL) {
		printf("无法在程序所在目录下建立存档，原因可能为:\n\n"
			   "1.存档被其他程序打开\n\n"
			   "2.没有修改此文件的权限（如程序在C盘，而没有在C盘建立文件或修改文件的权限）\n\n"
			   "按回车返回主菜单");
		scanf("%*c%*c");
		fclose(fp);
		return;
	} else {
		fprintf(fp, "%s %d %d %d %d %d %d\n", me.name, me.level, me.exp, me.HP, weaponId, drugId, me.money);
		printf("已存档！按回车返回主菜单");
		scanf("%*c%*c");
	}
	fclose(fp);
	return;
}

#endif 
