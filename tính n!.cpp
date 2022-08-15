#include<stdio.h>

int main  (){
	int n;
	printf("nhap n=");
	scanf ("%d",&n);
	int s=1;
    for(int i=1;i<=n;i++){
    	s=s*i;
		 
	} 
	printf("%d",s); 
} 
