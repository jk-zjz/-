#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Stddef.h>
#include<string.h>
#include<windows.h>

//��֧���
/*
ѭ��if���


int main() {
	int age;
	scanf(&age, "sd");

	if (age < 18) {
//if(age<10 && age>18){}   &&����
		printf("δ����");
	}
	else if (age > 18) {
		printf("����");
	};


	return 0;
};
*/


/*
/*ifǶ��
int main() {
	int a = 7;
	if (a<9)
	{
		if (a < 6) {
			printf("Ƕ��if");
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



//�ж�����
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

//switch ���

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
	default://������涼û��������������������
		printf("û��");
		break;
	}
	
	
	return 0; };
	*/


//ѭ�����

/*
int main() {
	int a = 1;
	while (a<10)//ֻҪ��С��100��һֱѭ��
	{
		a++;
		if (a == 5) {
			//break;//���a==50������ѭ��
			continue;//�������ѭ��

		};
		printf("%d  ", a);
		//����ѭ��������
	}

	return 0;
};
*/
//int main() {
//	int a = getchar();//��ȡ�������ϵ�һ���ַ�
//	putchar(a);
//
//	return 0;
//};


//getchar�÷�
/*
int main() {
	char p[20] = {0};
	int a = 0;
	int b = 0;
	scanf("%s",&p);
	while ((a=getchar()) != '\n')//ͨ��ѭ��getchar�ɻ��������е��ַ�����ʵ�ֽ���
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
	while ((a=getchar())!=EOF)//EOF�ı��������
	{
		if (a < 'A' || a > 'z') {//ͨ��ask�����ж���
			continue;
		}
		putchar(a);
	}
	return 0;
};
*/



//forѭ��
//forѭ������ʹ��continue,�� break
/*
int main() {
	for ( int i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
};
*/

//forѭ��������ֵ������������ʡ�ԣ�����ʡ�Ժ�Ϊ��
//int main() {
//	for (; ;)
//	{
//		printf("hh");
//	}
//	return 0;
//};


//do.....whileѭ����������ӡ���ڽ����ж�
//int main() {
//	int a = 2;
//	do
//	{
//		printf("hh");
//	} while (a>3);
//
//	return 0;
//};




//n�Ľ׳�
/*
int main() {
	int a;
	int sun=1;
	printf("������\n");
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


//�û���¼ֻ�ܵ�¼3����֤������ȷ
/*
int main() {
	int a = 0;
	int paswwd[10] = {0};
	int paswd[10] = {123456};
	while (1)
	{
		scanf("%d", &paswwd[0]);
		if (paswd[0] == paswwd[0]) {
			printf("������ȷ");
			break;
		}
		else
		{
			a++;
		}
			if (a == 3) {
				printf("�������");
				break;
			};
	};
	return 0;
};
*/

//��һ����������������һ�����ڵڼ���
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
//			printf("��%d��", u);
//		};
//		u++;
//	};
//
//	
//	return 0;
//};


//�滻

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
		Sleep(1000);//����ʱ
		system("cls");//�����Ļ
		printf("%s\n", b);
	}
	return 0;
};
































































