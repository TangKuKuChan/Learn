#include <stdio.h>

int main(){
    int year,mm,dd;
    char s[9];
    scanf("%s",&s);
    year=(s[0]-48)*1000+(s[1]-48)*100+(s[2]-48)*10+(s[3]-48);
    mm=(s[4]-48)*10+(s[5]-48);
    dd=(s[6]-48)*10+(s[7]-48);
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

    for(int i=0;i<=3;i++){
        if(s[i]!=s[7-i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}