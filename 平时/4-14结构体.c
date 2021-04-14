#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//描述学生结构体
//里面有名字，年龄，性别，电话
//struct stu{//struct 结构体关键词
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3 也是结构体创建的变量，但是是全局变量
////上面定义类型


//typedef struct stu{//typedef 给这个结构体重新定义一个名字
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//重新的名字
////上面定义类型
//int main()
//{
//	stu s={"琉璃",18,"18111","女"};//定义结构体变量简化
//	struct stu s2={"bbll",18,"125","男"};
//	printf("%d",s2.age);
//	return 0;
//}



//结构体嵌套结构体
//struct stu{
//	char name[20];
//	int age;
//	char nex[5];
//};
//struct stu2{
//	char name[20];
//	struct stu s;
//	int age;
//};
//int main(){
//	struct stu2 i={"哈哈",{"拜拜",18,"男"},17};
//	printf("%d\n",i.s.age);//18
//	printf("%s\n",i.name);//哈哈
//	printf("%s\n",i.s.nex);//男
//	return 0;
//}


//typedef struct stu{
//	char name[20];
//	int age;
//	char nex[5];
//}sut;
//void print1(sut s){//也要用结构体接
//	printf("%s\n",s.name);//里面用.
//	printf("%d\n",s.age);
//	printf("%s\n",s.nex);
//}
//void print2(sut* s){//要用指针接收
//	printf("%s\n",s->name);//里面用->
//	printf("%d\n",s->age);
//	printf("%s\n",s->nex);
//}
//int main(){
//	sut s={"老师",18,"女"};
//	//print1(s);//传结构体
//	print2(&s);//传结构体地址
//return 0;
//}