/*��Ʒʹ�ú��� 

void eatDrug();//��ҩ 

*/
#ifndef _USEF_H_
#define _USEF_H_

//�ҩ
void eatDrug() {
	me.HP += me.drug.recovery;
	if(me.HP > maxHP)
		me.HP = maxHP;
	printf("��ָ���%d������ֵ��\n", me.drug.recovery);
	return;
}

#endif
 
