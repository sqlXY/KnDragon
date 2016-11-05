/*结构体*/

#ifndef _STRUCTC_H_   
#define _STRUCTC_H_ 

//武器属性 
typedef struct Weapon {
	char name[20];
	int attack;
	int money;
	int level;
} Weapon;


//药属性 
typedef struct Drug {
	char name[20];
	int recovery;
	int money;
	int level;
} Drug;


//人物属性
typedef struct Character {
	char name[20];
	int level;
	int exp;
	Weapon weapon;
	Drug drug; 
	int HP;
	int money; 
} Character;

#endif  