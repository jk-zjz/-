#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a=0,b=0;
//	a=5/2;//��2��1 a==2��
//	b=5%2;//��2��1 b==1��
//	printf("%d\n",a);
//	printf("%d\n",b);
//	// ��������ֻҪ��һ������������������С����
//	//ȡģ���߲���Ϊ������
//
//	return 0;
//}

//int main(){
//	//����0������1
//	int a=16;
//	//  >>y=���Ʋ��������ƶ�����λ��
//	//00000000 00000000 00000000 000010000=16
//	//���Ʋ�����2���Ʒ�
//	//1�������ƣ��ұ߶�������ԭ����
//	//2�߼����ƣ��ұ߶�������0��
//	int b =a>>1;//������
//	printf("%d",b);
//}

//int main(){
//	//������3����ʽ,Դ��->����->����
//	//���ڴ���ŵ��ǲ���
//	//10000000 00000000 00000000 00000001=-1Դ��
//	//11111111 11111111 11111111 11111110=���룬���Ų���������λȡ��
//	//11111111 11111111 11111111 11111111=�����1=����
//	int a=16;
//	int b =a>>1;
//	printf("%d",b);
//}
//����
//int main(){
//	int a=-5;
//	//101->1010
//	//ֱ�Ӻ��油0
//	int b = a<<1;
//	printf("%d",b);
//	return 0;
//}
//<<��>>�����ƶ�����
//int main(){
//	//&->
//	int a=3;//011
//	int b=5;//101
//	int c =a&b;
//	//&�Զ����Ƽ���
//	//011
//	//101
//	//��Ϊ1��Ϊ1��c=001
//	printf("%d",c);
//	return 0;
//}
//int main(){
//	//|->ֻҪһ��Ϊ1����Ϊ1
//	int a=3;//011
//	int b=5;//101
//	int c =a|b;
//	//&�Զ����Ƽ���
//	//011
//	//101
//	//��Ϊ1��Ϊ1��c=111
//	printf("%d",c);
//	return 0;
//}
//int main(){
//	//^->��ͬΪ0������Ϊ1
//	int a=3;//011
//	int b=5;//101
//	int c =a^b;
//	//&�Զ����Ƽ���
//	//011
//	//101
//	//��Ϊ1��Ϊ1��c=110
//	printf("%d",c);
//	return 0;
//}
//��������
//1---���ܻ����
//int main(){
//	//�Ӽ���
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
//2--����㷨
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
//	//�����㸺��
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
//	printf("%d",!a);//!->�߼����������٣��ٱ���
//	return 0;
//}

//int main(){
//	short s =0;
//	int a=10;
//	printf("%d\n",sizeof(s =a+5));
//	printf("%d",s);//s=0sizeof���治�μ�����
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
//	printf("%d\n",++a);//�ȼӺ���
//	printf("%d\n",b++);//���ú��
//	return 0;
//}

//int main(){
//	int a=(int)3.14;
//	//ǿ������ת��
//	return 0;
//}

//void text(char a[],int arr[]){
//		printf("%d",sizeof(arr));
//		//������ָ������=4
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
//	//ͬΪ1����1��
//	printf("%d",a&&3);
//	//ͬΪ������棻
//	return 0;
//}
//int main(){
//	int i =0,a=1,b=2,c=3,d=4;
//	//i=a++ && ++b && d++;
//	i=a++ || ++b || d++;
//	printf("i=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}
//��Ŀ�����

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

//�ṹ���õ�
//struct stu{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main(){
//	struct stu i={"����",2,"2019"};
//	struct stu*ps=&i;
//	printf("%d",ps->age);//ָ��
//	//->����ǽṹ��ָ��->�ұ߳�Ա��
//	//printf("%s\n",i.name);
//	//printf("%d\n",i.age);
//	//printf("%s\n",i.id);
//	return 0;
//}


//��������
//int main(){
//	char a=3;
//	//00000000 00000000 00000000 00000011
//	//00000011---a
//	char n=127;
//	//00000000 00000000 00000000 01111111
//	//01111111---n
//	char c=a+n;
//	//a--��������-���λ����λ--00000000 00000000 00000000 00000011
//	//n--��������-���λ����λ--00000000 00000000 00000000 01111111
//	//c=00000000 00000000 00000000 10000010-->c=10000010
//	printf("%d",c);
//	//c--��������-���λ����λ--11111111 11111111 11111111 10000010--����
//	//c-1=11111111 11111111 11111111 10000001--����
//	//c=10000000 00000000 00000000 01111110=-126
//	return 0;
//}

//int main(){
//	char a=1;
//	printf("%u\n",sizeof(a));//1
//	printf("%u\n",sizeof(+a));//4
//	printf("%u\n",sizeof(!a));//4--����
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
//���ʽֻ��һ��ִ��·������Ȼ�����������