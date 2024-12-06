#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(1){
        if(a%2==0){
            a/=2;
        }
        else{
            a*=3;
            a++;
        }
        printf("%d",a);
        if(a==1){
            break;
        }
        else{
            printf(" ");
        }
    }
    
}