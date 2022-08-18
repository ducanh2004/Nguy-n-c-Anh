#include <stdio.h>
#include <math.h>
int main(){
    int a[1000],n,i,x,kcgn,kc;
    printf("nhap n:");
    scanf("%d",&n);
    printf("nhap x:");
    scanf("%d",&x);
    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
    kcgn=10000000;
    for (i=0;i<n;i++){
    if (x!=a[i]){
    if (kcgn>abs(a[i]-x)) {
        kcgn=abs(a[i]-x);
        kc=a[i];
        }
    }
}
 printf("gia tri gan %d nhat la:",x);
    for (i=0;i<n;i++){
        if (kcgn==abs(a[i]-x))
    printf("\t%d",a[i]);
    }
        }
