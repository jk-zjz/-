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
		//��ҡ�����
		//�����
		wanjia(ab,row,col);
		//��ӡ
		dayin(ab,row,col);
		//�ж�
		ret=ying(ab,row,col);
		if(ret!='c'){
			break;
		}
		//������
		diannao(ab,row,col);
		//��ӡ
		dayin(ab,row,col);
		//�ж�
		ret=ying(ab,row,col);
		if(ret!='c'){
			break;
		}
		bl++;
	}
	if(ret=='*'){
		printf("��Ӯ��");
	}else if(ret=='#'){
		printf("����Ӯ��");
	}else if(ret=='q'){
		printf("ƽ��");
	}
}
void caidan(){
	printf("*****************************\n");
	printf("****   1 ��      0 ����  ****\n");
	printf("*****************************\n");
}
void text(){
	int a=0;
	srand((unsigned int)time( NULL));
	do{
	caidan();
	printf("������0--1 :");
	scanf("%d",&a);
	if(a==1){
		game();
		break;
	}else if(a==0){
		printf("�˳��ɹ�\n");
	}else{
		printf("����������\n");
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