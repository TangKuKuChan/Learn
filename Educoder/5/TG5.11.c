#include <stdio.h>

int main(){
    int year,mm,dd;
    scanf("%d%d%d",&year,&mm,&dd);
    if(mm<1||mm>12||dd>31){
        printf("NO");
        return 0;
    }
    if(!(year%4==0&&year%100!=0||year%400==0)){
        if(mm==2&&dd>28){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}