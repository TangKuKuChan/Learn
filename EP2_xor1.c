#include <stdio.h>

int main(){
    int a=5,b=8;
    a = a^b;
    b= a^b;
    a= a^b;
    //利用异或实现不用其余空间交换数值
    //1^1=0 1^0=1 0^0=0
    printf("%d %d",a,b);
}