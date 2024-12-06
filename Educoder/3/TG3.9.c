#include <stdio.h>
#include <math.h>

int main(){
    int a,n,sum=0,tmp=0;
    scanf("%d%d",&a,&n);
    for(;n>0;n--){
        tmp=0;
        for(int i=n-1;i>=0;i--){
            tmp+=a*pow(10,i);
        }
        printf("tmp=%d\n",tmp);
        sum+=tmp;
    }
    printf("%d",sum);
    return 0;
}