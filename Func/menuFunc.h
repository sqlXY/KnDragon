/*�˵�����

void menu();//���˵� 

*/

#ifndef _MENUF_H_   
#define _MENUF_H_

//���˵� 
void menu() {
	system("cls");
	int select;
	printf("************************\n");
	printf("\t��ս��ʿ\n"); 
	printf("************************\n");
	printf("* %s��ʿ\n*\n",me.name);
	printf("* ����0 �˳�\n* ����1 ��ʾ��������\n* ����2 ��������\n* ����3 �������\n* ����4 �ҩ�̵�\n* ����5 ����\n");
	printf("\n ��Ҫ:");
	scanf("%d", &select); 
	switch(select) {
		case 0 : printf("\n %s!��С��!",me.name);exit(0);break;
		case 1 : disChar();break; 
		case 2 : buyWeapon();break;
		case 3 : wildMonster();break;
		case 4 : buyDrug();break;
		case 5 : fuckDragon();break;
		default : printf("��...���Ȼ�������������"); 
	}
}

#endif 
