/*结构体*/

#ifndef _STRUCTC_H_   
#define _STRUCTC_H_ 

//武器属性 
typedef struct Weapon {
	char name[20];			//武器名称
	int attack;				//武器攻击力
	int money;				//购买武器所需金钱
	int level;				//武器星级
} Weapon;


//药属性 
typedef struct Drug {
	char name[20];			//药品名称
	int recovery;			//药品恢复生命值
	int money;				//购买药品所需金钱
	int level;				//药品等级
} Drug;


//人物属性
typedef struct Character {
	char name[20];			//角色名称
	int level;				//角色等级
	int exp;				//角色经验
	Weapon weapon;			//角色携带武器
	Drug drug; 				//角色携带药品
	int HP;					//角色血量
	int money; 				//角色拥有金钱
} Character;


//怪物属性
typedef struct Monster {
	char name[20];			//怪物名称
	int minLevel;			//怪物最低出现等级
	int maxLevel;			//怪物出现最高等级
	int HP;					//怪物基础血量
	int attack;				//怪物基础攻击力	
	int exp;				//打败怪物后所得经验
	int money;				//怪物金钱
	double ratio;			//随等级各项能力成长系数
} Monster;

#endif  