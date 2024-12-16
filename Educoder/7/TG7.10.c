#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,a[10],x;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int *p=a;
    int *q=&a[0];
    int min=abs(*p-x);
    for(int i=1;i<n;i++){
        if(abs(*(p+i)-x)<min){
            min=abs(*(p+i)-x);
            q=p+i;
        }
    }
    printf("%d",*q);
}