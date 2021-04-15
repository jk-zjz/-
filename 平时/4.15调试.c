#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int i;
//	for(i=0;i<100;i++){
//		printf("%d ",i);
//	}
//	system("pause");
//	return 0;
//}
//运行
//Debug----->产生一个Debug版本的可执行程序
//Release--->产生一个Release版本的可执行程序
//不一样的是---》大小不同Debug大
//因为Debug 是可以调试的会出现调试信息  Release不能调试

//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++){
//		printf("ss");
//		arr[i]=0;
//	}
//return 0;
//}
//访问越界


//F5-->启动调试，用来调试到断点

//F5和F9要配合使用列：
//int main()
//{
//	int i;
//	for(i=0;i<100;i++){
//		printf("%d ",i);
//	}
//	for(i=0;i<100;i++){
//		printf("%d ",10-i);
//	}
//	return 0;
//}

//如果错误出现在第二个循环
//使用F9，在前面出现一个红点--》断点
//使用断点了，按F5直接跳到下一个断点处

//int add(int a,int b){
//	return a+b;
//}
//int main(){
//	//printf("sss\n");
//	int a=20;
//	int b=10;
//	int c =add(a,b);
//	printf("%d\n",c);
//	return 0;
//}

//F10-->逐过程，不进入函数内部
//F11-->逐语句，要进入函数内部
//shift+F11-->从函数内部跳出，但是函数已经执行完



//进栈----出栈
//void text3(){
//	printf("%d",10);
//}
//
//void text2(){
//	text3();
//}
//
//void text1(){
//	text2();
//}
//
//int main(){
//text1();
//return 0;
//}
//调用堆栈
//进栈只能在顶上加函数，出栈要从上面一个一个下来

//列：进栈-->
/*
4.	text3()
3.	text2()
2.	text1()
1.	main()
*/

//列：出栈-->
/*
1.	text3()
2.	text2()
3.	text1()
4.	main()
*/


//列体1：
//求n的阶层:
//int sun1(int a){
//	if(a==1){
//		return 1;
//	}
//	return a*sun1(a-1); 
//
//}
//int main(){
//int a ,i,mun=0,o=0;
//printf("请输入");
//scanf("%d",&a);
//for(i=1;i<=a;i++){
//	o+=sun1(i);
//}
//printf("%d",o);
//return 0;
//}

//错误
//int main(){
//	int i=0,sun=0,n=0,ret=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		int j;
//		//重新把ret 赋值成1
//		//ret=1;
//		for(j=1;j<=i;j++){
//			ret*=j;
//		}
//		sun+=ret;
//	}
//	printf("%d",sun);
//return 0;
//}
//问题ret没有从新变1


//错误列2：
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++){
//		printf("ss");
//		arr[i]=0;
//	}
//return 0;
//}
//1.越界访问
//2.栈的存储是从高地址到低地址所以当arrp[10]地址加1，+1到了arr[12]这个地址刚刚好是i,所以i被赋值回去了


//在Debug版本里面
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n",&i);//00DFFEAC
//	printf("%p\n",arr);//00DFFE7C
//return 0;
//}
//栈的创建规则地址高到底
//所以i的地址>arr地址


//在Release版本里面
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n",&i); //012FFA90
//	printf("%p\n",arr);//012FFA94
//	system("pause");
//return 0;
//}
//所以arr的地址>i地址
//因为Release吧代码优化了


//实现库函数strcpy1.0
//void mystrcpy(char *b,char *i){
//	int o=0;
//	int a=strlen(i);//计算拷贝内容的大小
//	int o1=strlen(b);//计算拷贝地址的大小
//	if(a>o1){//比较大小看会不会越界
//		printf("拷贝不合法\n");
//		return;
//	}else{
//	for(o=0;o<=a;o++){
//		if(o==a){//拷贝\0
//			b[o]='\0';
//		}else{
//			b[o]=i[o];
//		}
//	}
//	}
//}
//int main(){
//	char b[]="fffff";
//	char i[]="bbll";
//	mystrcpy(b,i);
//	printf("%s",b);
//return 0;
//}



//实现库函数strcpy 2.0
//void mystrcpy(char *b,char *i){
//	while(*i!='\0'){
//	*b=*i;
//	b++;
//	i++;
//	}
//	*b=*i;
//}
//int main(){
//	char b[]="fffff";
//	char i[]="bbll";
//	mystrcpy(b,i);
//	printf("%s",b);
//return 0;
//}



//实现库函数strcpy 3.0
//void mystrcpy(char *b,char *i){
//	if(i!=NULL && b!=NULL){
//	while(*b++=*i++){
//		;
//	}
//	}
//}
//int main(){
//	char b[]="fffff";
//	char i[]="bbll";
//	mystrcpy(b,NULL);
//return 0;
//}
//但是比较难发现问题



//实现库函数strcpy 4.0
//void mystrcpy(char *b,char *i){
//	assert(b!=NULL);//断言
//	assert(i!=NULL);
//	while(*b++=*i++){
//		;
//	}
//}
//int main(){
//	char b[]="fffff";
//	char i[]="bbll";
//	mystrcpy(b,NULL);
//return 0;
//}
//assert   断言
//assert 返回值是真就不报错，如果为假就报错


//实现库函数strcpy 5.0
//char * mystrcpy(char *b,const char *i){//吧 char *i的值定死不能改变，因为i是拷贝的内容
//	char *ret=b;//创建一个新的地址用来存放b的起始地址
//	assert(b!=NULL);//断言
//	assert(i!=NULL);
//	while(*b++=*i++){
//		;
//	}
//	return ret;//返回b的地址用来判断成功没有
//}
//int main(){
//	char b[]="fffff";
//	char i[]="bbll";
//	mystrcpy(b,i);
//return 0;
//}



//列：const用法

//int main(){
//	int mun=10;
//	int *p=&mun;
//	*p=20;
//	printf("%d",mun);//通过地址改变mun
//}


//int main(){
//	const int mun=10;//吧mun定义成不可改变
//	//mun=20;会报错
//	int *p=&mun;
//	*p=20;
//	printf("%d",mun);//通过地址改变mun
//}
//但是吧mun地址赋值给p，p并不知道mun是不可改变的变量所以p强行打破规则


//int main(){
//	const int mun=10;//吧mun定义成不可改变
//	//mun=20;会报错
//	const int *p=&mun;//加在*前面告诉指针传入的数不可改变
//	*p=20;
//	printf("%d",mun);//通过地址改变mun报错
//}


//const 可以对指针所以可以放在 * 前面，和后面列：
//int main(){
//	int o=0;
//	const int mun=10;//吧mun定义成不可改变
//	//mun=20;会报错
//	int * const p=&mun;//吧指针也定义成不可改变
//	p =&o;//在一次更改* p的时候，指针p是不能别改变成别的地址了
//	*p=20;
//	printf("%d",mun);//通过地址改变mun
//}




//设计strlen()
int my_strlen(const char *a){
	char *o=a;//定义一个新指针装a起始
	int num=0;
	assert(a!=NULL);
	while(*o++!='\0'){
	num++;
	}
	return num;

}
int main(){
	char a[]="abcdef";
	printf("%d",my_strlen(a));
return 0;
}