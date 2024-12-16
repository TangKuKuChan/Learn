#include <stdio.h>

void swap(int *p,int *q){
    int tmp=*p;
    *p=*q;
    *q=tmp;
}
void sort(int *p,int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(*(p+j)>*(p+j+1)){
                swap(&p[j],&p[j+1]);
            }
        }
    }
}

int main(){
    int a[10],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n==1){   
        printf("%d",a[0]);
        return 0;
    }
    sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(" ");
        }
    }
}