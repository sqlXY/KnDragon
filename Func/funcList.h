/*函数列表*/


/** menuFunc.h **/
void menu();							//主菜单
void gameSave();    					//储存游戏
void gameRead();						//读取游戏


/** displayFunc.h **/
void disChar();     					//显示角色信息 
void disWeapons();  					//显示武器信息 
void disDrugs();    					//显示药品信息 


/** initFunc.h **/
void initChar();    					//初始化角色


/** buyFunc.h **/
void buyWeapon();   					//购买武器 
void buyDrug();     					//购买药品


/** useFunc.h **/
void eatDrug();     					//吃药


/** fightFunc.h **/ 
void wildMonster(); 					//打怪练级
int randomLevel(); 						//随机生成怪物等级
Monster createMonster(int level);		//随机生成怪物


/** dragonFunc.h **/
void fuckDragon();  					//屠龙 

