#include "game.h"
void bbhh(char a[row][col],int y,int y1){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			a[i][j]=' ';
		}
	}
}
void dayin(char a[row][col],int y,int y1){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%c ",a[i][j]);
			if(j!=col-1){
			printf("|");
			}
		}
		printf("\n");
		if(i!=row-1){
			int k=0;
			while(k<col){
				printf("-- ");
				k++;
			}
		}
		printf("\n");
	}
}
void wanjia(char a[row][col],int y,int y1){
	int o=0,o1=0;
	while(1){
	printf("第几行---第几列:\n");
	scanf("%d%d",&o,&o1);
	if((o>=1 && o<=row) && (o1>=1 && o1<=col)){
		if(a[o-1][o1-1]==' '){
			a[o-1][o1-1]='*';
			break;
		}else{
			printf("改坐标被占\n");
		}
	}else{
		printf("输入错误");
	}

	}}
void diannao(char a[row][col],int y,int y1){
	int x=0,o=0;
	while(1){
	x=rand()%row;
	o=rand()%col;
	if(a[x][o]==' '){
		a[x][o]='#';
		break;
	}
	}
}
char ying(char a[row][col],int y,int y1){
	int i =0,j,i1,j1,op=0;
	for(i=0;i<row;i++){
		if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][1]!=' '){
				return a[i][0];
		}
	}
	for(j=0;j<col;j++){
			if(a[0][j]==a[1][j] && a[1][j]==a[2][j]&&a[1][j]!=' '){
				return a[0][j];
			}
		}
		if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]!=' '|| a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!=' '){
				return a[1][1];
			}
		for(i1=0;i1<row;i1++){
			for(j1=0;j1<col;j1++){
				if(a[i1][j1]!=' '){
				op++;
				}
			}
		}
		if(op==9){
			return 'q';
		}
	return 'c'; 
}
