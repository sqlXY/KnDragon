/*�ṹ��*/

#ifndef _STRUCTC_H_   
#define _STRUCTC_H_ 

//�������� 
typedef struct Weapon {
	char name[20];
	int attack;
	int money;
	int level;
} Weapon;


//ҩ���� 
typedef struct Drug {
	char name[20];
	int recovery;
	int money;
	int level;
} Drug;


//��������
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