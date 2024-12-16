#include <stdio.h>

int main(){
    int a,max,min;
    scanf("%d",&a);
    max=min=a;
    while(scanf("%d",&a)==1){
        if(a>max){
            max=a;
        }
        else if(a<min){
            min=a;
        }
    }
    printf("%d",max-min);
}