#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char str[]="hhh k";
//	printf("%d\n%d",sizeof(str),strlen(str));
//	//6-5
//	//strlen--->����ĸ����
//	//sizeof--->���ֽڴ�С��������һ��\0,����6��Ԫ��6*1=6
//	return 0;
//}


//��ҵ1
//ð������
//int main(){
//	int a[]={3,2,6,5,7,8,9,4,1};
//	int o,i=0,j=0,h;
//	int *p=a;
//	int l=(sizeof(a)/sizeof(int))-1;
//	while(j<l){
//	i=0;
//	while(i<(l-j)){
//	if(*(p+i)>*(p+1+i)){
//		o=*(p+i);
//		*(p+i)=*(p+1+i);
//		*(p+1+i)=o;
//	}
//	i++;
//	}
//	j++;
//	}
//	for(h=0;h<l+1;h++){
//	printf("%d\n",*(p+h));
//	}
//return 0;
//}



//��ҵ2
//����ʵ�������ʼ��0
//����ʵ�ִ�ӡÿһ��Ԫ��
//����ʵ������
//void init(int pp[],int o){
//	int y;
//	for(y=0;y<o;y++){
//		pp[y]=0;
//	}
//}
//void print(int pp[],int o){
//	int y;
//	for(y=0;y<o;y++){
//		printf("%d\n",pp[y]);
//	}
//}
//void reverse(int pp[],int o){
//	int t=0,i=0,j=0;
//	while(t<(o/2)){
//		j=pp[i+t];
//		pp[i+t]=pp[o-t-1];
//		pp[o-t-1]=j;
//		t++;
//	}
//}
//int main(){
//	int a[]={2,3,1,5,6,8,7,9,};
//	int o =sizeof(a)/sizeof(int);
//	//init(a,o);//��ʼ��0
//	//print(a,o);//��ӡÿһ��Ԫ��
//	reverse(a,o);//����
//return 0;
//}


//��ҵ3
//���齻������ͬ����
//void jiaohuan(int a[],int b[],int k){
//	int l=0,p=0;
//	for(l=0;l<k;l++){
//		p=a[l];
//		a[l]=b[l];
//		b[l]=p;
//	}
//}
//int main(){
//	int a[]={1,2,3,4};
//	int b[]={5,6,7,8};
//	int k=4;
//	jiaohuan(a,b,k);//����
//return 0;
//}

//char ��һ���ֽ�
//int main(){
//	int a =0x11223344;
//	char *pc=(char*)&a;
//	*pc=0;
//	printf("%d",a);
//return 0;
//}


//��ҵ4
//�Ƚ�2�����Ķ�����Ϊ����ͬ�м���1.0
//int bbll(int c,int o){
//	while(c>0){
//		if(c%2==1){
//			o++;
//		}
//		c=c/2;
//
//	}
//	return o;
//}
//int llbb(int h,int o){
//	while(h>0){
//		if(h%2==1){
//			o++;
//		}
//		h=h/2;
//	}
//return o;
//}
//int main(){
//	int a=1999;
//	int b=2299;
//	int c= a|b;
//	int h=a&b;
//	int o=0;
//	int ll= bbll(c,o);
//	int bb=llbb(h,o);
//	int u=ll-bb;
//	printf("%d\n",h);
//	return 0;
//}


//��ҵ4
//�Ƚ�2�����Ķ�����Ϊ����ͬ�м���2.0
//int jj(int o){
//	int i=0;
//	while(o){
//		o=o&(o-1);
//		i++;
//	}
//return i;
//}
//int main(){
//	int a=1999;
//	int b=2299;
//	int ab=a|b;
//	int h=a&b;
//	int i=jj(ab);
//	int ii=jj(h);
//	int p=i-ii;
//	printf("%d",p);
//return 0;
//}


//��ҵ4
//�Ƚ�2�����Ķ�����Ϊ����ͬ�м���3.0
//^��λ���
//int jj(int a,int b){
//	int c=a^b;//^--->��ͬΪ0����ͬΪ1
//	int i=0;
//	while(c){
//		c=c&(c-1);
//	i++;
//	}
//}
//int main(){
//	int a=1999;
//	int b=2299;
//	int c =jj(a,b);
//	printf("%d",c);
//return 0;
//}


//��ҵ5
//��ӡһ�����Ķ�������1.0
//void sx(int a){
//	int o[32];
//	int i=0;
//	int p;
//	while(a>0){
//	if(a%2==1){
//		o[i]=1;
//	}else{
//		o[i]=0;
//	}
//	a=a/2;
//	i++;
//	}
//	i=i-1;
//	for(i;i>=0;i--){
//		printf("%d",o[i]);
//	}
//	printf("\n");
//}
//int main(){
//	int a =5;
//	sx(a);
//	return 0;
//}


//��ҵ5
//��ӡһ�����Ķ�������2.0
//void jj(int a){
//	int i;
//	printf("��");
//	for(i=30;i>=0;i-=2){
//		printf("%d",(a>>i)&1);
//	}
//	printf("\n");
//	printf("ż");
//	for(i=31;i>=1;i-=2){
//		printf("%d",(a>>i)&1);
//	}
//	printf("\n");
//}
//int main(){
//	int a=5;
//	jj(a);
//return 0;
//}



//��ҵ6
//����һ��������������ֵ1�ĸ���1.0
//unsigned--->ǿ������ת��Ϊ�޷�������������
//-1
//Դ�룺10000000 00000000 00000000 00000001
//���룺11111111 11111111 11111111 11111110
//���룺11111111 11111111 11111111 11111111
//����--->Դ������ͬ
//int fhz(unsigned int a){
//	int i=0;
//	while(a>0){
//		if(a%2==1){
//			i++;
//		}
//		a=a/2;
//	}
//	return i;
//}
//int main(){
//	int a=-1;
//	int gs =fhz(a);
//	printf("%d��1�ĸ����ǣ�%d",a,gs);
//return 0;
//}


//��ҵ6
//����һ��������������ֵ1�ĸ���2.0
//int fhz(int a){
//	int i=1,ii=1,k=0;
//	while(ii<=32){
//		if(((a&(i<<ii))!=0)){
//			k++;
//		}
//		ii++;
//	}
//	return k;
//}
//int main(){
//	int a=-1;
//	int gs =fhz(a);
//	printf("%d��1�ĸ����ǣ�%d",a,gs);
//return 0;
//}


//��ҵ6
//����һ��������������ֵ1�ĸ���3.0
//13    1101
//int fhz(int a){
//	int k=0;
//	while(a>0){
//		a=a&(a-1);
//		k++;
//	}
//return k;
//}
//int main(){
//	int a=1235;
//	int gs =fhz(a);
//	printf("%d��1�ĸ����ǣ�%d",a,gs);
//return 0;
//}


//��ҵ7
//ʹ��ָ���ӡ����
//int main(){
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int i;
//	for(i=0;i<sizeof(arr)/sizeof(int);i++){
//		printf("%d\n",*(p+i));
//	}
//return 0;
//}


//��ҵ8
//�ж�����
//int add(int a){
//	int i=2;
//	for(i;i<a/2;i++){
//		if(a%i==0){
//			return 0;
//		}else{
//			return 1;
//		}
//
//	}
//}
//int main(){
//	int a=100;
//	for(a;a<200;a++){
//	int y =add(a);
//	if(y==1){
//		printf("%d��\n",a);
//	}
//	}
//}


//��ҵ9
//�ж��ǲ�������
//int main(){
//	int a=1920;
//	if(a%4==0 && a%100!=0||a%400==0){
//		printf("��\n");
//	}else{
//		printf("����\n");
//	}
//return 0;
//}


//��ҵ10
//������
//void add(int*a,int*b){
//	int c=0;
//	c=*a;
//	*a=*b;
//	*b=c;
//
//}
//int main(){
//int a=2;
//int b=5;
//	add(&a,&b);
//	printf("a=%d;b=%d",a,b);
//return 0;
//}


//��ҵ11
//��ӡ�˷���
//int main(){
//	int a=12;
//	int i,j;
//	for(i=1;i<=a;i++){
//		for(j=0;j<=i;j++){
//			printf("%d*%d=%d  ",i,j,i*j);
//		}
//	printf("\n");
//	}
//
//return 0;
//}


//���ֲ���1.0
//��ҵ12
//int main(){
//	int a[]={1,2,3,4,5,6,7,8,9,10,12,13,14,15};
//	int z=0;
//	int y=sizeof(a)/sizeof(int);
//	int cz=11;
//	int zj=(sizeof(a)/sizeof(int)-1)/2;
//	while(y>=z){
//	if(cz>a[zj]){
//		printf("��");
//		z=zj;
//		zj=(y+z)/2;
//	}
//	if(cz<a[zj]){
//		printf("��");
//		y=zj;
//		zj=(y+z)/2;
//	}
//	if(cz==a[zj]){
//		printf("�ҵ����±�%d\n",zj);
//		break;
//	}
//	}
//return 0;
//}


//��ҵ13
//�����ݹ��ӡ���ֵ�ÿһλ
//void dig(int a){
//	if(a>10){
//	dig(a/10);
//	}
//	printf("%d\n",a%10);
//}
//int main(){
//	int a=1899;
//	dig(a);
//	return 0;
//}


//��ҵ14
//�ݹ�ʵ��n��k�η�1.0
//int dg(int n,int k){
//	static int b=0;
//	static int b1=1;
//	if(k+1>1){
//		k--;
//		dg(n,k);
//		b=b++;
//		b1=b1*n;
//	}
//	if(b==5){
//		return b1;
//	}
//
//}
//int main(){
//	int n=2;
//	int k=5;
//	int a=dg(n,k);
//	printf("%d",a);
//return 0;
//}


//��ҵ14
//�ݹ�ʵ��n��k�η�2.0
//int jj(int j,int k){
//	if(k==1){
//		return j;
//	}
//	return j*jj(j,k-1);
//
//}
//int main(){
//	printf("%d",jj(3,2));
//	return 0;
//}



//��ҵ15
//��һ���������1.0
//void dig(int a){
//	static int b=0;
//	if(a>10){
//	dig(a/10);
//	}
//	b=b+a%10;
//	printf("%d\n",b);
//}
//int main(){
//	int a=1729;
//	dig(a);
//	return 0;
//}


//��ҵ15
//��һ���������2.0
//int dig(int a){
//	if(a>10){
//		return dig(a/10)+a%10;
//	}else{
//		return a;
//	}
//}
//int main(){
//	
//	int a=dig(1729);
//	printf("%d",a);
//	return 0;
//}


//��ҵ16
//����������������
//void jh(int*a,int*b){
//	//*a=*a+*b;
//	//*b=*a-*b;
//	//*a=*a-*b;
//
//	*a=*a^*b;//*a^*b---10^101--111
//	*b=*a^*b;//*a^*b---111^101--010
//	*a=*a^*b;//*a^*b---111^010--101
//}
//int main(){
//	int a=2;
//	int b=5;
//	jh(&a,&b);
//	printf("a=%d,b=%d",a,b);
//return 0;
//}


//��ҵ17
//��һ�����Ľײ�1.0
//int main(){
//	int a=14,i,sun=1;
//	for(i=1;i<=a;i++){
//		sun=sun*i;
//	}
//	printf("%d",sun);
//
//return 0;
//}


//��ҵ17
//��һ�����Ľײ�2.0
//int jj(int a){
//	if(a==1){
//		return a;
//	}
//	return a*jj(a-1);
//}
//int main(){
//	int a=5,i;
//	int b=jj(a);
//	printf("%d",b);
//return 0;
//}

//��ҵ18
//�����ַ���  abcd-->dcbac  1.0
//int str(char arr[]){
//	int i=0;
//	while(arr[i]!='\0'){
//		i++;
//	}
//		return i;
//
//}
//int jj(char *arr){
//	int l=0;
//	int f=str(arr)-1;
//	while(l<f){
//		char tem=' ';
//		tem=arr[l];
//		arr[l]=arr[f];
//		arr[f]=tem;
//		l++;
//		f--;
//	}
//}
//int main(){
//	char arr[]="qwerty";
//	jj(&arr);
//	printf("%s",arr);
//return 0;
//}




//��ҵ18
//�����ַ���  abcd-->dcba  2.0
//int str(char arr[]){
//	int i=0;
//	while(arr[i]!='\0'){
//		i++;
//	}
//		return i;
//
//}
//int jj(char *arr,int a){
//	int i;
//	int o=' ';
//	static int aa=5;
//	if(a==0){
//		return a;
//	}
//	i=jj(arr,a-1);
//	printf("%d",i);
//	o=arr[i];
//	arr[i]=arr[aa-i];
//	arr[aa-i]=o;
//	printf("%s",arr);
//	return a;
//}
//int main(){
//	char arr[]="qwerty";
//	int a =str(arr)/2;
//	jj(&arr,a);
//return 0;
//}

//��ҵ18
//��ת��ӡ2.0
//void jj(char* a){
//	int i=0;
//	if(*a=='\0'){
//	return ;
//	}
//	jj(a+1);
//	printf("%c",a[i]);
//}
//int main(){
//	char a[]="abcdef";
//	jj(&a);
//
//return 0;
//}



//��ҵ18
//��ת��ӡ3.0
//int str(char arr[]){
//	int i=0;
//	while(arr[i]!='\0'){
//		i++;
//	}
//		return i;
//
//}
//void jj(char arr[]){
//	char tmp =arr[0];//1
//	int len=str(arr);
//	arr[0]=arr[len-1];//2
//	arr[len-1]='\0';//3
//	if(str(arr+1)>=2){
//		jj(arr+1);//4
//	}
//	arr[len-1]=tmp;//5
//}
///*
//a b c d e f
//1.����һ����ʱ����tmp=arr[0]
//2.���ַ������һ���ַ���ֵ��arr[0]
//3.�����һ���ַ���ֵ��\0  arr[len-1]='\0'
//4.�ڰ�ʣ�µ�b c d e���·Ž�ȥ  jj(arr+1)  arr+1--char����+1
//5.������ַ�\0���tep   arr[len-1]=tep
//*/
//int main(){
//	char arr[]="abcdef";
//	jj(arr);
//	printf("%s",arr);
//
//return 0;
//}

