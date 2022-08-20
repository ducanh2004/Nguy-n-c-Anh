#include<stdio.h>
int ucln(int a,int b){
	if(a==b){
	return a; 	
	}else
		{
		if (a>b){
		a=a-b;			
		}else{
		
		b=b-a;}	
	}
return b;	
	
} 
int main(){
	int a,b;
	printf("nhap a");
	scanf("%d",&a);
	printf("nhap b");
	scanf("%d",&b);
int	uc=ucln(a,b);
	printf ("%d",uc);
	
} 
