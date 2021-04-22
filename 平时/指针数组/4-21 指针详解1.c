#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//字符指针
//int main()
//{
//	char s[]="abcd";
//	char *p=&s;
//	printf("%c",*p);//abcd
//	printf("%s",s);//abcd
//	return 0;
//}


//int main(){
//	char *p="abcdef";//把abcdef  的首字母地址放到指针里
//	printf("%c",*p);
//	printf("%s",p);
//return 0;
//}


//int main(){
//	char *p="abcdef";
//	*p='W';
//	printf("%s",p);
//return 0;
//}
//程序崩溃
//因为abcdef是一个常量，不可改变
//给char加上const：const char*="abcdef";


//例题1：
//int main(){
//	char a[]="abcdef";
//	char b[]="abcdfe";
//	const char *p="abcdef";
//	const char *o="abcdef";
//	/*if(p==o){ //因为abcdef是一个常量所以*p==*o 因为一样所以只有一个内存空间
//		printf("hehe");
//	}else{
//		printf("haha");
//	}*/
//
//
//	//if(a==b){  //a,b都是地址所以不相同
//	//	printf("haha");
//	//}else{
//	//	printf("hehe");
//	//}
//return 0;
//}



//指针数组
//int main(){
//	int arr[10]={0};//整形数组
//	char ch[5]={ 0 };//字符数组
//	int *p[4]; //存放整形指针的数组 --指针数组
//	char *pa[4];//存放字符的数组--指针数组
//return 0;
//}


//int main(){
//	int a=10;
//	int b=20;
//	int c=30;
//	int d=40;
//	int *p[4]={&a,&b,&c,&d};
//	printf("%p",p[0]);
//return 0;
//}

//int main(){
//	int arr1[]={1,2,3,4};
//	int arr2[]={2,3,4,5};
//	int arr3[]={3,4,5,6};
//	
//	int *parr[]={arr1,arr2,arr3};
//	int i;
//	for(i=0;i<3;i++){
//		int j=0;
//		printf("%d",sizeof(parr[i])/sizeof(int));
//			for(j=0;j<4;j++){
//				printf("%d ",*(parr[i]+j));
//			}
//			printf("\n");
//	}
//return 0;
//}

//遍历数组东西