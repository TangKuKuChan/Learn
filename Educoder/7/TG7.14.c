#include <stdio.h>

int main(){
    int count=0,flag=1;
    char c;
    while(1){
        if(scanf("%c",&c)==1){
            if(c==' '){
                if(flag){
                    count++;
                    flag=0;
                }
            }
            else{
                flag=1;
            }
        }
        else{
            break;
        }
    }
    printf("%d",count+1);
}