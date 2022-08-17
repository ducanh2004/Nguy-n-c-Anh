#include<stdio.h>
int main (){
	int arry[100],s,n;
	printf("nhap n=");
	scanf("%d",&n);
	int dem=0;
	float tb;
	 for(int i=0;i<n;i++){
	 	printf("arry[%d]",i);
	 	scanf("%d",&arry[i]);}
	 	
	 	
	 for(int i=0;i<n;i++){
	 	
	 	
	 	if(arry[i]%2==1){
	 		dem=dem+1;
	 		s=s+arry[i];
	 		tb=s/(float)dem;
		 }
}
	 printf("dem la trung binh cong la %f",tb);
}
