/*��Ʒ������ 

void buyWeapon();//�������� 
void buyDrug();//����ҩƷ 

*/


//��������ϵͳ
void buyWeapon() {
	int select;
	system("cls");
	disWeapons();
	while(1) {
		printf("��������ʲô������\n��������ǰ��ſɽ��й�������-1�������˵�:");
		scanf("%d", &select);
		if(select > weaponCount - 1 || select < -1)
			printf("û���Ǹ�ѡ�\n");
		else if(select >= 0 && me.money < weapons[select].money) {
			printf("���߰ɣ������ⲻ��ӭ���˿��");
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

//�ҩ�̵�
void buyDrug() {
	int select;
	system("cls");
	disDrugs();
	while(1) {
		printf("��������ʲôҩ��\n����ҩǰ��ſɽ��й�������-1�������˵�:");
		scanf("%d", &select);
		if(select > drugCount - 1 || select < -1)
			printf("û���Ǹ�ѡ�\n");
		else if(select >= 0 && me.money < drugs[select].money) {
			printf("���߰ɣ�ûǮ��ʲô����");
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


