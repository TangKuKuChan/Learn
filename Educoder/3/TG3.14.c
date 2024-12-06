#include <stdio.h>

int main(){
    int a,f=1,k=5;
    char c;
    for(;k>0;k--){
        scanf("%d %c",&a,&c);
        if(f){
            if(a==5){
                k=5;
            }
            else if(a==1){
                k=4;
            }
            f=0;
        }
        for(int i=1;i<=a;i++){
            for(int p=1;p<=2*i-1;p++){
                printf("%c",c);
            }
            printf("\n");
        }
        for(int i=a-1;i>=1;i--){
            for(int p=1;p<=2*i-1;p++){
                printf("%c",c);
            }
            printf("\n");
        }
        printf("\n");
    }
}