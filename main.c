#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "./Config/defineConfig.h" //��������
#include "./Config/structConfig.h" //�ṹ��
#include "./Config/globalConfig.h" //ȫ�ֱ���(������ҩƷ������)
#include "./Func/funcList.h"       //���������б�
#include "./Func/initFunc.h"	   //��ʼ������
#include "./Func/displayFunc.h"    //��Ϣ��ʾ����
#include "./Func/buyFunc.h"        //��Ʒ������
#include "./Func/menuFunc.h"       //�˵�����
#include "./Func/useFunc.h"        //ʹ����Ʒ����
#include "./Func/fightFunc.h"      //�����������
#include "./Func/dragonFunc.h"	   //�й����ĺ���


int main() { 
	initChar();
	menu();
	scanf("%*c%*c");
	return 0;
}
