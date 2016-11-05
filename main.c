#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "./Config/defineConfig.h" //参数设置
#include "./Config/structConfig.h" //结构体
#include "./Config/globalConfig.h" //全局变量(武器、药品、人物)
#include "./Func/funcList.h"       //函数声明列表
#include "./Func/initFunc.h"	   //初始化函数
#include "./Func/displayFunc.h"    //信息显示函数
#include "./Func/buyFunc.h"        //物品购买函数
#include "./Func/menuFunc.h"       //菜单函数
#include "./Func/useFunc.h"        //使用物品函数
#include "./Func/fightFunc.h"      //打怪练级函数
#include "./Func/dragonFunc.h"	   //有关龙的函数


int main() { 
	initChar();
	menu();
	scanf("%*c%*c");
	return 0;
}
