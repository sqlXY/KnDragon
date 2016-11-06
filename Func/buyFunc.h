/*物品购买函数 

void buyWeapon();//购买武器 
void buyDrug();//购买药品 

*/


//武器购买系统
void buyWeapon() {
	int select;
	system("cls");
	disWeapons();
	while(1) {
		printf("请问想买什么武器？\n输入武器前序号可进行购买，输入-1返回主菜单:");
		scanf("%d", &select);
		if(select > weaponCount - 1 || select < -1)
			printf("没有那个选项！\n");
		else if(select >= 0 && me.money < weapons[select].money) {
			printf("快走吧，我们这不欢迎穷屌丝！");
		}
		else
			break;
	}
	if(select == -1)
		return;
	else {
		me.money -= weapons[select].money;
		me.weapon = weapons[select];
		return; 
	}
}

//嗑药商店
void buyDrug() {
	int select;
	system("cls");
	disDrugs();
	while(1) {
		printf("请问想买什么药？\n输入药前序号可进行购买，输入-1返回主菜单:");
		scanf("%d", &select);
		if(select > drugCount - 1 || select < -1)
			printf("没有那个选项！\n");
		else if(select >= 0 && me.money < drugs[select].money) {
			printf("快走吧，没钱治什么病！");
		}
		else
			break;
	}
	if(select == -1)
		return;
	else {
		me.money -= drugs[select].money;
		me.drug = drugs[select];
		return; 
	}
}


