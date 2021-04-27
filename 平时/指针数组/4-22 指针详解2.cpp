#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//数组指针 --指针
//int main()
//{
//	//int *o='\0';//o是整形指针--指向整形的指针--可以存整形的地址
//	//char *p ='\0';//p是字符指针--指向字符的指针--可以存字符的地址
//	//数组指针--指向数组的指针--存放数组的地址
//	//int a[10]={0};
//	//a--首元素地址
//	//a[0]--首元素地址
//	//&a--数组地址
//
//
//	int a[10]={1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10] = &a;//数组地址要存起来
//	int i;
//	for(i=0;i<11;i++){
//	printf("%p  ",p[i]);
//	}
//	return 0;
//}


//int main(){
//	char *arr[5];//--指针数组
//	char* (*pa)[5]=&arr;//数组指针里面放的指针数组
//	/*
//	(*pa)说明pa是一个指针
//	[5] pa指向数组是5个元素
//	char * -- pa指向数组的元素类型是char*
//	*/
//return 0;
//}


//数组指针的用法

//int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;
//	int i;
//	//for(i=0;i<10;i++){
//	//	printf("%d",(*p)[i]);
//	//	//打印1-10
//	//}
//	for(i=0;i<10;i++){
//		printf("%d",*(*p+i));
//		//打印1-10
//	}
//return 0;
//}



//数组指针一般用于二维数组级以上
//打印二维数组
//void my_printf1(int arr[3][5],int x,int y){
//	int i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<5;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//void my_printf2(int (*p)[5],int x,int y){
//	int i,j=0;
//	while(j<3){
//	for(i=0;i<5;i++){
//		//p是数组{1,2,3,4,5}的地址;
//		printf("%d ",(*(p+j))[i]);
//	}
//	j++;
//	printf("\n");
//	}
//}
//int main(){
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	//my_printf1(arr,3,5);//arr就是首元素地址
//	my_printf2(arr,3,5);//数组指针
//return 0;
//}



/*
int main(){
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	printf("%d",*arr);
return 0;
}

首元素地址就是{1,2,3,4,5}这个数组的地址
*/

//int main(){
//	int a[10]={1,2,3,4,5,6,7,8,9,10};
//	int i;
//	int *p=a;
//	for(i=0;i<10;i++){
//		//printf("%d ",a[i]);
//		//printf("%d ",*(p+i));
//		//printf("%d ",*(a+i));
//		//三个等价所以   a[i]==p[i]
//		printf("%d ",p[i]);
//	}
//return 0;
//}


//所以


//void my_printf2(int (*p)[5],int x,int y){
//	int i,j=0;
//	while(j<3){
//	for(i=0;i<5;i++){
//		//printf("%d ",(*(p+j))[i]);
//		printf("%d ",p[j][i]);
//	}
//	j++;
//	printf("\n");
//	}
//}
//int main(){
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	my_printf2(arr,3,5);//数组指针
//return 0;
//}



/*

int arr[5]---->是一个数组，大小是5

int *parr1[10]---->是一个指针数组,里面可以存放10个int类型的指针

int (*parr2)[10]---->是一个数组指针,可以存放一个大小为10的数组的指针

int (*parr3[10])[5]---是一个有10个数组的指针数组，每一个指针数组都可以反5大小的数组指针，是int形

*/