#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void game(){
	char ret;
	int bl=0;
	char ab[row][col]={0};
	bbhh(ab,row,col);
	dayin(ab,row,col);
	while(1){
		//玩家》电脑
		//玩家走
		wanjia(ab,row,col);
		//打印
		dayin(ab,row,col);
		//判断
		ret=ying(ab,row,col);
		if(ret!='c'){
			break;
		}
		//电脑走
		diannao(ab,row,col);
		//打印
		dayin(ab,row,col);
		//判断
		ret=ying(ab,row,col);
		if(ret!='c'){
			break;
		}
		bl++;
	}
	if(ret=='*'){
		printf("你赢了");
	}else if(ret=='#'){
		printf("电脑赢了");
	}else if(ret=='q'){
		printf("平局");
	}
}
void caidan(){
	printf("*****************************\n");
	printf("****   1 玩      0 不玩  ****\n");
	printf("*****************************\n");
}
void text(){
	int a=0;
	srand((unsigned int)time( NULL));
	do{
	caidan();
	printf("请输入0--1 :");
	scanf("%d",&a);
	if(a==1){
		game();
		break;
	}else if(a==0){
		printf("退出成功\n");
	}else{
		printf("请重新输入\n");
		text();
	}
	}
	while(a);
}
int main()
{
	text();
	return 0;
}