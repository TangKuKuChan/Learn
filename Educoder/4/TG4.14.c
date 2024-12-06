#include <stdio.h>
#include <string.h>

char s[32];
int FinalSum(long long int a){
    int sum=0;
    sprintf(s,"%lld",a);
    for(int i=0;i<strlen(s);i++){
        sum+=s[i]-48;
    }
    if(sum>=10){
        sum = FinalSum((long long int)sum);
    }
    return sum;
}


int main(){
    long long int N;
    int sum;
    scanf("%lld",&N);
    sum = FinalSum(N);
    printf("%d",sum);
    return 0;
}