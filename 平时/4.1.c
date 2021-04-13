#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a=0,b=0;
//	a=5/2;//商2余1 a==2；
//	b=5%2;//商2余1 b==1；
//	printf("%d\n",a);
//	printf("%d\n",b);
//	// 除号两边只要有一个浮点数除出来就是小数；
//	//取模两边不能为浮点数
//
//	return 0;
//}

//int main(){
//	//正补0，负不1
//	int a=16;
//	//  >>y=右移操作符，移二进制位的
//	//00000000 00000000 00000000 000010000=16
//	//右移操作符2种移发
//	//1算术右移：右边丢弃，左补原符号
//	//2逻辑右移：右边丢弃，左补0；
//	int b =a>>1;//算数移
//	printf("%d",b);
//}

//int main(){
//	//整数有3个形式,源码->反码->补码
//	//在内存里放的是补码
//	//10000000 00000000 00000000 00000001=-1源码
//	//11111111 11111111 11111111 11111110=反码，符号不变其他按位取反
//	//11111111 11111111 11111111 11111111=反码加1=补码
//	int a=16;
//	int b =a>>1;
//	printf("%d",b);
//}
//左移
//int main(){
//	int a=-5;
//	//101->1010
//	//直接后面补0
//	int b = a<<1;
//	printf("%d",b);
//	return 0;
//}
//<<和>>不能移动负数
//int main(){
//	//&->
//	int a=3;//011
//	int b=5;//101
//	int c =a&b;
//	//&对二进制计算
//	//011
//	//101
//	//都为1才为1，c=001
//	printf("%d",c);
//	return 0;
//}
//int main(){
//	//|->只要一个为1，就为1
//	int a=3;//011
//	int b=5;//101
//	int c =a|b;
//	//&对二进制计算
//	//011
//	//101
//	//都为1才为1，c=111
//	printf("%d",c);
//	return 0;
//}
//int main(){
//	//^->相同为0，相异为1
//	int a=3;//011
//	int b=5;//101
//	int c =a^b;
//	//&对二进制计算
//	//011
//	//101
//	//都为1才为1，c=110
//	printf("%d",c);
//	return 0;
//}
//交换变量
//1---可能会溢出
//int main(){
//	//加减法
//	int a=3;//011
//	int b=5;//101
//	//6--110
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	return 0;
//}
//2--异或算法
//int main(){
//	int a=3;//011
// 	int b=5;//101
//	b=a^b;
//	a=a^b;
//	b=a^b;
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//}
//int main(){
//	int num =15625,j=0,k=0;
//	//while (num)
//	//{
//	//	if(num%2 ==1){
//	//	j++;
//	//	}	
//	//	num =num/2;
//	//}
//	//printf("%d",j);
//	//不能算负数
//	while(j<32){
//	if(num&1==1){
//		k++;
//	}
//	num=num>>1;
//	j++;
//	}
//	printf("%d\n",k);
//	return 0;
//}
//int main(){
//	int a=10;
//	printf("%d",!a);//!->逻辑反操作真变假，假变真
//	return 0;
//}

//int main(){
//	short s =0;
//	int a=10;
//	printf("%d\n",sizeof(s =a+5));
//	printf("%d",s);//s=0sizeof里面不参加运算
//	//int a =0;
//	//char b='s';
//	//int arr[10]={0};
//	//printf("%d\n",sizeof(a));
//	//printf("%d\n",sizeof(int));
//	//printf("%d\n",sizeof(b));
//	//printf("%d\n",sizeof(char));
//	//printf("%d\n",sizeof(arr));
//	//printf("%d\n",sizeof(int [10]));
//	return 0;
//}

//int main(){
//	int a=0;
//	printf("%d",~a);
//	return 0;
//}
//int main(){
//	int a =0;
//	int b =0;
//	printf("%d\n",++a);//先加后用
//	printf("%d\n",b++);//先用后加
//	return 0;
//}

//int main(){
//	int a=(int)3.14;
//	//强制类型转化
//	return 0;
//}

//void text(char a[],int arr[]){
//		printf("%d",sizeof(arr));
//		//传的是指针所以=4
//		printf("%d",sizeof(a));
//}
//int main(){
//	int arr[10]={0};
//	char a[10]={0};
//	printf("%d",sizeof(arr));
//	printf("%d",sizeof(a));
//	text(a,arr);
//	return 0;
//}


//int main(){
//	int a=5;
//	int b =3;
//	printf("%d",a&3);
//	//a=00000101
//	//b=00000011
//	//同为1就是1；
//	printf("%d",a&&3);
//	//同为真就是真；
//	return 0;
//}
//int main(){
//	int i =0,a=1,b=2,c=3,d=4;
//	//i=a++ && ++b && d++;
//	i=a++ || ++b || d++;
//	printf("i=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}
//三目运算符

//int main(){
//	int a =5,b=3;
//	int i=0;
//	//if(a>b){
//	//	printf("%d",a);
//	//}else{
//	//	printf("%d",b);
//	//}
//	i =a>b ?a:b;
//	printf("%d",i);
//return 0;
//}
//int main(){
//	int a=1;
//	int b =2;
//	int c=(a<b,a=b+10,a,b=a+1);
//	printf("%d",c);
//	return 0;
//}

//结构体用点
//struct stu{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main(){
//	struct stu i={"张三",2,"2019"};
//	struct stu*ps=&i;
//	printf("%d",ps->age);//指针
//	//->左边是结构体指针->右边成员名
//	//printf("%s\n",i.name);
//	//printf("%d\n",i.age);
//	//printf("%s\n",i.id);
//	return 0;
//}


//整形提升
//int main(){
//	char a=3;
//	//00000000 00000000 00000000 00000011
//	//00000011---a
//	char n=127;
//	//00000000 00000000 00000000 01111111
//	//01111111---n
//	char c=a+n;
//	//a--整形提升-最高位符号位--00000000 00000000 00000000 00000011
//	//n--整形提升-最高位符号位--00000000 00000000 00000000 01111111
//	//c=00000000 00000000 00000000 10000010-->c=10000010
//	printf("%d",c);
//	//c--整形提升-最高位符号位--11111111 11111111 11111111 10000010--补码
//	//c-1=11111111 11111111 11111111 10000001--反码
//	//c=10000000 00000000 00000000 01111110=-126
//	return 0;
//}

//int main(){
//	char a=1;
//	printf("%u\n",sizeof(a));//1
//	printf("%u\n",sizeof(+a));//4
//	printf("%u\n",sizeof(!a));//4--不明
//	return 0;
//}

//int main(){
//	int a=10;
//	int b =20;
//	//int c =b+a*3;
//	int c =b+a+3;
//	printf("%d",c);
//	return 0;
//}



//int main(){
//	int a =1;
//	/*int b =(++a)+(++a)+(++a);*/
//	int b=0;
//	b+=++a;
//	b+=++a;
//	b+=++a;
//	printf("%d\n",b);
//	printf("%d\n",a);
//}
//表达式只有一种执行路径，不然就是有问题的