#include<stdio.h>
int ucln(int a,int b){
	if(a==b){
	return a; 	
	}else
	{
		while (a!=b){
		if(a>b){
		a=a-b;			
		}else{
		
		b=b-a;}	
	}
		return b; 
	}
}
int bcnn(int a,int b){
	int s;
	s=a*b;
	int bc;
	bc=s/ucln(a,b);  
	return bc; 
} 
int main(){
	int a,b;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
int bc=bcnn(a,b);
	printf("%d",bc); 
} 
