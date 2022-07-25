#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Stddef.h>
#include<string.h>
#include<windows.h>

//分支语句
/*
循环if语句


int main() {
	int age;
	scanf(&age, "sd");

	if (age < 18) {
//if(age<10 && age>18){}   &&并且
		printf("未成年");
	}
	else if (age > 18) {
		printf("成年");
	};


	return 0;
};
*/


/*
/*if嵌套
int main() {
	int a = 7;
	if (a<9)
	{
		if (a < 6) {
			printf("嵌套if");
		}
		else
		{
			printf("s7");
		};

	}
	else
	{
		printf("hh");
	}
	return 0;
};
*/



//判断奇数
/*
int main() {
	for ( int i = 0; i < 100; i++)
	{
		if (i % 2 == 1) {
			printf("%d\n", i);

		}
	}
	return 0;

};

int main() {
	int i = 1;
	while (i<100)
	{
		printf("%d",i);
		i +=2;
	}
	return 0;
};

*/

//switch 语句

/*
int main() {
	int day = 2;
	switch (day)
	{
	case 1: {
		printf("ji");
		break;
	}
	case 2:{
		printf("2");
		break;
	}
	case 3: {
		printf("3");
		break;
}

	}


	return 0;
};

int main() { 
	int a=0;
	scanf("&a");
	switch (a)
	{
	case 1:
	case 2:
		printf("we1.2");
		break;
	default://如果上面都没有满足的条件着运行这个
		printf("没有");
		break;
	}
	
	
	return 0; };
	*/


//循环语句

/*
int main() {
	int a = 1;
	while (a<10)//只要啊小于100就一直循环
	{
		a++;
		if (a == 5) {
			//break;//如果a==50就跳出循环
			continue;//跳过这次循环

		};
		printf("%d  ", a);
		//跳出循环的条件
	}

	return 0;
};
*/
//int main() {
//	int a = getchar();//获取到键盘上的一个字符
//	putchar(a);
//
//	return 0;
//};


//getchar用法
/*
int main() {
	char p[20] = {0};
	int a = 0;
	int b = 0;
	scanf("%s",&p);
	while ((a=getchar()) != '\n')//通过循环getchar吧缓存器所有的字符读完实现结束
	{
		;
	}
	b=getchar();
	putchar(b);
	return 0;
};
*/

/*
int main() {
	int a = 0;
	while ((a=getchar())!=EOF)//EOF文本结束标记
	{
		if (a < 'A' || a > 'z') {//通过ask码来判定的
			continue;
		}
		putchar(a);
	}
	return 0;
};
*/



//for循环
//for循环可以使用continue,和 break
/*
int main() {
	for ( int i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
};
*/

//for循环条件赋值，自增都可以省略，条件省略恒为真
//int main() {
//	for (; ;)
//	{
//		printf("hh");
//	}
//	return 0;
//};


//do.....while循环，上来打印，在进行判断
//int main() {
//	int a = 2;
//	do
//	{
//		printf("hh");
//	} while (a>3);
//
//	return 0;
//};




//n的阶乘
/*
int main() {
	int a;
	int sun=1;
	printf("请输入\n");
	scanf("%d",&a);
	for (  ; a>0; a--)
	{
		sun = sun * a;
	}
	printf("%d", sun);
	return 0;
};
*/

//1!+2!+3!.....+10!
/*
int main() {
	int sun2 = 0;
	for (int i = 1; i <11; i++) {
 		int sun = 1;
		for (int j=i; j >0 ; j--) {
			sun = sun * j;
		};
		sun2 = sun + sun2;
	};
	printf("%d", sun2);
	return 0;
};
*/


//用户登录只能登录3次验证密码正确
/*
int main() {
	int a = 0;
	int paswwd[10] = {0};
	int paswd[10] = {123456};
	while (1)
	{
		scanf("%d", &paswwd[0]);
		if (paswd[0] == paswwd[0]) {
			printf("输入正确");
			break;
		}
		else
		{
			a++;
		}
			if (a == 3) {
				printf("输入错误");
				break;
			};
	};
	return 0;
};
*/

//在一个有序的数组里查找一个数在第几个
//int main() {
//	char a[10] = { "123456789"};
//	char b;
//	do
//	{
//		scanf("%c", &b);
//	}
//	while (b<'0'  ||  b>'9');
//	int u = 1;
//	for (int i = 0; i <strlen(a); i++)
//	{
//		if (b == a[i]) {
//		
//			printf("第%d个", u);
//		};
//		u++;
//	};
//
//	
//	return 0;
//};


//替换

int main() {
	char a[20] = { "abcdefghijk" };
	char b[20] = {0};
	for (int i = 0; i < strlen(a) ; i++) {
		b[i] = '#';
	};
	int k = strlen(a) - 1, m = 0;
	for ( int j = 0; j < strlen(a)/2+1; j++)
	{
		b[m] = a[m];
		b[k] = a[k];
		k--;
		m++;
		Sleep(1000);//到计时
		system("cls");//清空屏幕
		printf("%s\n", b);
	}
	return 0;
};
































































