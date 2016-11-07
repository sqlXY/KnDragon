/*�ṹ��*/

#ifndef _STRUCTC_H_   
#define _STRUCTC_H_ 

//�������� 
typedef struct Weapon {
	char name[20];			//��������
	int attack;				//����������
	int money;				//�������������Ǯ
	int level;				//�����Ǽ�
} Weapon;


//ҩ���� 
typedef struct Drug {
	char name[20];			//ҩƷ����
	int recovery;			//ҩƷ�ָ�����ֵ
	int money;				//����ҩƷ�����Ǯ
	int level;				//ҩƷ�ȼ�
} Drug;


//��������
typedef struct Character {
	char name[20];			//��ɫ����
	int level;				//��ɫ�ȼ�
	int exp;				//��ɫ����
	Weapon weapon;			//��ɫЯ������
	Drug drug; 				//��ɫЯ��ҩƷ
	int HP;					//��ɫѪ��
	int money; 				//��ɫӵ�н�Ǯ
} Character;


//��������
typedef struct Monster {
	char name[20];			//��������
	int minLevel;			//������ͳ��ֵȼ�
	int maxLevel;			//���������ߵȼ�
	int HP;					//�������Ѫ��
	int attack;				//�������������	
	int exp;				//��ܹ�������þ���
	int money;				//�����Ǯ
	double ratio;			//��ȼ����������ɳ�ϵ��
} Monster;

#endif  