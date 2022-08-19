#include<stdio.h>
#include<math.h>
int tamgiac(int a,int b,int c){
	if(a+b>c&&a+c>b&&b+c>a){
		return true;
	}else{
		return false;
	}
	 
} 
int chuvi(int a,int b,int c){
	int cv;
	cv=a+b+c;
	return cv;
}
int dientich(int a,int b,int c){
	float p;
	p=(float)chuvi(a,b,c)/2;
	float s;
	s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	int a;
	printf("nhap a:");
	scanf("%d",&a);
	int b;
	printf("nhap b:");
	scanf("%d",&b);
	int c;
	printf("nhap c:");
	scanf("%d",&c);
	if(tamgiac(a,b,c)){
		int cv=chuvi(a,b,c);
		printf("chu vi la: %d",cv);
	}else{
		printf("khong phai tam giac");
	}
	if(tamgiac(a,b,c)){
	
	float s=dientich(a,b,c);
	printf("dien tich tam giac la :%f",s);
}else{
	printf("khong phai tam giac");
}
}
