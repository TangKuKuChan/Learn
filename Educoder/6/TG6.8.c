#include <stdio.h>

void Hex(int x){
    int yushu= x%16;
    int next = x/16;
    if(next!=0){
        Hex(next);
    }
    if(yushu<10){
        printf("%d",yushu);
    }
    else{
        printf("%c",yushu+55);
    }
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        Hex(i);
        printf(" ");
    }
    return 0;
}