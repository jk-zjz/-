#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ַ�ָ��
//int main()
//{
//	char s[]="abcd";
//	char *p=&s;
//	printf("%c",*p);//abcd
//	printf("%s",s);//abcd
//	return 0;
//}


//int main(){
//	char *p="abcdef";//��abcdef  ������ĸ��ַ�ŵ�ָ����
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
//�������
//��Ϊabcdef��һ�����������ɸı�
//��char����const��const char*="abcdef";


//����1��
//int main(){
//	char a[]="abcdef";
//	char b[]="abcdfe";
//	const char *p="abcdef";
//	const char *o="abcdef";
//	/*if(p==o){ //��Ϊabcdef��һ����������*p==*o ��Ϊһ������ֻ��һ���ڴ�ռ�
//		printf("hehe");
//	}else{
//		printf("haha");
//	}*/
//
//
//	//if(a==b){  //a,b���ǵ�ַ���Բ���ͬ
//	//	printf("haha");
//	//}else{
//	//	printf("hehe");
//	//}
//return 0;
//}



//ָ������
//int main(){
//	int arr[10]={0};//��������
//	char ch[5]={ 0 };//�ַ�����
//	int *p[4]; //�������ָ������� --ָ������
//	char *pa[4];//����ַ�������--ָ������
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

//�������鶫��