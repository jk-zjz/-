#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void jiem(){
	printf("*****************************************\n");
	printf("****       1.��        0.�˳�        ****\n");
	printf("*****************************************\n");
}
void sx(){
	char a[row][nol]={0};
	csh1(a,row,nol);
	csh(a,row,nol);
	day(a,row,nol);
	while(1){
	int o =yhdy(a,row,nol);
	if(o==0){
		break;
	}
	day(a,row,nol);
}

}
void text(){
	srand( (unsigned int)time(NULL) );
	do{
	int a=0;
	jiem();
	printf("������");
	scanf("%d",&a);
	if(a==1){
		sx();
		break;
	}else if(a==0){
		printf("�˳��ɹ�\n");
		break;
	}else{
		printf("�������\n");
	}
	}
	while(1);
}
int main(){
	text();
	return 0;
}
