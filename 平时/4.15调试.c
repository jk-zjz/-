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
//����
//Debug----->����һ��Debug�汾�Ŀ�ִ�г���
//Release--->����һ��Release�汾�Ŀ�ִ�г���
//��һ������---����С��ͬDebug��
//��ΪDebug �ǿ��Ե��ԵĻ���ֵ�����Ϣ  Release���ܵ���

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
//����Խ��


//F5-->�������ԣ��������Ե��ϵ�

//F5��F9Ҫ���ʹ���У�
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

//�����������ڵڶ���ѭ��
//ʹ��F9����ǰ�����һ�����--���ϵ�
//ʹ�öϵ��ˣ���F5ֱ��������һ���ϵ㴦

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

//F10-->����̣������뺯���ڲ�
//F11-->����䣬Ҫ���뺯���ڲ�
//shift+F11-->�Ӻ����ڲ����������Ǻ����Ѿ�ִ����



//��ջ----��ջ
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
//���ö�ջ
//��ջֻ���ڶ��ϼӺ�������ջҪ������һ��һ������

//�У���ջ-->
/*
4.	text3()
3.	text2()
2.	text1()
1.	main()
*/

//�У���ջ-->
/*
1.	text3()
2.	text2()
3.	text1()
4.	main()
*/


//����1��
//��n�Ľײ�:
//int sun1(int a){
//	if(a==1){
//		return 1;
//	}
//	return a*sun1(a-1); 
//
//}
//int main(){
//int a ,i,mun=0,o=0;
//printf("������");
//scanf("%d",&a);
//for(i=1;i<=a;i++){
//	o+=sun1(i);
//}
//printf("%d",o);
//return 0;
//}

//����
//int main(){
//	int i=0,sun=0,n=0,ret=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		int j;
//		//���°�ret ��ֵ��1
//		//ret=1;
//		for(j=1;j<=i;j++){
//			ret*=j;
//		}
//		sun+=ret;
//	}
//	printf("%d",sun);
//return 0;
//}
//����retû�д��±�1


//������2��
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
//1.Խ�����
//2.ջ�Ĵ洢�ǴӸߵ�ַ���͵�ַ���Ե�arrp[10]��ַ��1��+1����arr[12]�����ַ�ոպ���i,����i����ֵ��ȥ��


//��Debug�汾����
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n",&i);//00DFFEAC
//	printf("%p\n",arr);//00DFFE7C
//return 0;
//}
//ջ�Ĵ��������ַ�ߵ���
//����i�ĵ�ַ>arr��ַ


//��Release�汾����
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n",&i); //012FFA90
//	printf("%p\n",arr);//012FFA94
//	system("pause");
//return 0;
//}
//����arr�ĵ�ַ>i��ַ
//��ΪRelease�ɴ����Ż���


//ʵ�ֿ⺯��strcpy1.0
//void mystrcpy(char *b,char *i){
//	int o=0;
//	int a=strlen(i);//���㿽�����ݵĴ�С
//	int o1=strlen(b);//���㿽����ַ�Ĵ�С
//	if(a>o1){//�Ƚϴ�С���᲻��Խ��
//		printf("�������Ϸ�\n");
//		return;
//	}else{
//	for(o=0;o<=a;o++){
//		if(o==a){//����\0
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



//ʵ�ֿ⺯��strcpy 2.0
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



//ʵ�ֿ⺯��strcpy 3.0
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
//���ǱȽ��ѷ�������



//ʵ�ֿ⺯��strcpy 4.0
//void mystrcpy(char *b,char *i){
//	assert(b!=NULL);//����
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
//assert   ����
//assert ����ֵ����Ͳ��������Ϊ�پͱ���


//ʵ�ֿ⺯��strcpy 5.0
//char * mystrcpy(char *b,const char *i){//�� char *i��ֵ�������ܸı䣬��Ϊi�ǿ���������
//	char *ret=b;//����һ���µĵ�ַ�������b����ʼ��ַ
//	assert(b!=NULL);//����
//	assert(i!=NULL);
//	while(*b++=*i++){
//		;
//	}
//	return ret;//����b�ĵ�ַ�����жϳɹ�û��
//}
//int main(){
//	char b[]="fffff";
//	char i[]="bbll";
//	mystrcpy(b,i);
//return 0;
//}



//�У�const�÷�

//int main(){
//	int mun=10;
//	int *p=&mun;
//	*p=20;
//	printf("%d",mun);//ͨ����ַ�ı�mun
//}


//int main(){
//	const int mun=10;//��mun����ɲ��ɸı�
//	//mun=20;�ᱨ��
//	int *p=&mun;
//	*p=20;
//	printf("%d",mun);//ͨ����ַ�ı�mun
//}
//���ǰ�mun��ַ��ֵ��p��p����֪��mun�ǲ��ɸı�ı�������pǿ�д��ƹ���


//int main(){
//	const int mun=10;//��mun����ɲ��ɸı�
//	//mun=20;�ᱨ��
//	const int *p=&mun;//����*ǰ�����ָ�봫��������ɸı�
//	*p=20;
//	printf("%d",mun);//ͨ����ַ�ı�mun����
//}


//const ���Զ�ָ�����Կ��Է��� * ǰ�棬�ͺ����У�
//int main(){
//	int o=0;
//	const int mun=10;//��mun����ɲ��ɸı�
//	//mun=20;�ᱨ��
//	int * const p=&mun;//��ָ��Ҳ����ɲ��ɸı�
//	p =&o;//��һ�θ���* p��ʱ��ָ��p�ǲ��ܱ�ı�ɱ�ĵ�ַ��
//	*p=20;
//	printf("%d",mun);//ͨ����ַ�ı�mun
//}




//���strlen()
int my_strlen(const char *a){
	char *o=a;//����һ����ָ��װa��ʼ
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