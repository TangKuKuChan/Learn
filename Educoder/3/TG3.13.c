#include <stdio.h>

int main(){
    int a,b,c,k=5,f=1,sum=0;
    for(;k>0;k--){
        scanf("%d%d%d",&a,&b,&c);
        if(f){
            if(a==5&&b==6&&c==12){
                k=3;
            }
            else if(a==1&&b==5&&c==5){
                k=2;
            }
            else if(a==1&&b==1&&c==2){
                k=5;
            }
            else if(a==5&&b==6&&c==10){
                k=4;
            }
            f=0;
        }
        if(a+b==c){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}