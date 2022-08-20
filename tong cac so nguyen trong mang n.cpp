#include<stdio.h>
int tongcacsonguyen(int n,int arr[]){
	int s=0;
	for(int i=0;i<n;i++){
		s+=arr[i]; 
}
return s; 
	 
}
int main(){
	int arr[5]={1,2,3,4,5};
	int s= tongcacsonguyen(5,arr);
	printf("tong cac so nguyen:%d",s); 
} 
