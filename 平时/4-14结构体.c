#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//����ѧ���ṹ��
//���������֣����䣬�Ա𣬵绰
//struct stu{//struct �ṹ��ؼ���
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3 Ҳ�ǽṹ�崴���ı�����������ȫ�ֱ���
////���涨������


//typedef struct stu{//typedef ������ṹ�����¶���һ������
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//���µ�����
////���涨������
//int main()
//{
//	stu s={"����",18,"18111","Ů"};//����ṹ�������
//	struct stu s2={"bbll",18,"125","��"};
//	printf("%d",s2.age);
//	return 0;
//}



//�ṹ��Ƕ�׽ṹ��
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
//	struct stu2 i={"����",{"�ݰ�",18,"��"},17};
//	printf("%d\n",i.s.age);//18
//	printf("%s\n",i.name);//����
//	printf("%s\n",i.s.nex);//��
//	return 0;
//}


//typedef struct stu{
//	char name[20];
//	int age;
//	char nex[5];
//}sut;
//void print1(sut s){//ҲҪ�ýṹ���
//	printf("%s\n",s.name);//������.
//	printf("%d\n",s.age);
//	printf("%s\n",s.nex);
//}
//void print2(sut* s){//Ҫ��ָ�����
//	printf("%s\n",s->name);//������->
//	printf("%d\n",s->age);
//	printf("%s\n",s->nex);
//}
//int main(){
//	sut s={"��ʦ",18,"Ů"};
//	//print1(s);//���ṹ��
//	print2(&s);//���ṹ���ַ
//return 0;
//}