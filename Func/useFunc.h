/*物品使用函数 

void eatDrug();//吃药 

*/
#ifndef _USEF_H_
#define _USEF_H_

//嗑药
void eatDrug() {
	me.HP += me.drug.recovery;
	if(me.HP > maxHP)
		me.HP = maxHP;
	printf("你恢复了%d点生命值！\n", me.drug.recovery);
	return;
}

#endif
 
