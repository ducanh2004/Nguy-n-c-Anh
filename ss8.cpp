
#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("nhap so thu nhat:");
	scanf("%d,&a");
	printf("nhap so thu hai:");
	scanf("%d,&b");
	printf("nhap so thu ba:");
	scanf("%d,&c");
	max=a>b>c;
	if("a<b>c"){
		max=b;
		printf("so lon nhat la %b,max");
		
	}else{
	if("a<b<c"){
		max=c;
		printf("so lon nhat la%d,max");
		
	}
	}
}
