#include "game.h"
void csh(char a[row][nol],int x,int y){
	int i=0;
	while(i<30){
		int h =rand()%row;
		int h1=rand()%nol;
		if(a[h][h1]=='*'){
		
		}else{
		a[h][h1]='*';
		i++;
		}
	}
	printf("\n");
}
void day(char a[row][nol],int x,int y){
	int i,j,k;
	for(i=0;i<row;i++){
		for(j=0;j<nol;j++){
			if(a[i][j]=='*'){
				printf(" ");
			}else{
				printf("%c",a[i][j]);
			}
			if(j<nol-1){
			printf(" |");
			}
		}
		printf("\n");
		if(i<row-1){
		for(k=0;k<row;k++){
			printf("-- ");
		}
		}
		printf("\n");
	}
}
int yhdy(char a[row][nol],int x,int y){
	int ap=0,b=0,num=0,k=0;
	printf("第几行--第几列\n");
	scanf("%d%d",&ap,&b);
	if(a[ap-1][b-1]=='*'){
		printf("你输了\n");
		return 0;
	}else{
	if(ap>row &&ap<0 && b>nol && b<0){
		printf("重新输入");
	}else{
		//5 5
		int a1=ap-1,a2=a1+3;
		for(a1;a1<a2;a1++){
			int b1=b-1,b2=b1+3;
			for(b1;b1<b2;b1++){
				if(a[a1][b1]=='*'){
					k+=1;
				}
			}
		}
	}
	
	switch(k){
	case 0:
		a[ap-1][b-1]='0';
		break;
	case 1:
		a[ap-1][b-1]='1';
		break;
	case 2:
		a[ap-1][b-1]='2';
		break;
	case 3:
		a[ap-1][b-1]='3';
		break;
	case 4:
		a[ap-1][b-1]='4';
		break;
	case 5:
		a[ap-1][b-1]='5';
		break;
	case 6:
		a[ap-1][b-1]='6';
		break;
	case 7:
		a[ap-1][b-1]='7';
		break;
	case 8:
		a[ap-1][b-1]='8';
		break;
	}
	}
}
void csh1(char a[row][nol],int x,int y){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<nol;j++){
			a[i][j]=' ';
		}
	}
}