/*��ʼ������ 

void initChar();//��ʼ����ɫ 

*/
#ifndef _INITF_H_
#define _INITF_H_

//��ʼ����ɫ 
void initChar() {
	char name[20];
	printf("��������ʿ������:"); 
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
