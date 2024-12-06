#include <stdio.h>
char s1[20],s2[20];

int main(){
    int a,sum1=0,sum2=0;
    scanf("%d",&a);
    for(int i=a/2;i>=1;i--){
        if(a%i==0){
            sum1+=i;
            
        }
    }
    //printf("%d\n",sum1);
    for(int i=sum1/2;i>=1;i--){
        if(sum1%i==0){
            sum2+=i;
            
        }
    }
    //printf("%d\n",sum2);
    if(sum2==a){
        printf("%d",sum1);
        
    }
    else{
        printf("-1");
    }
    return 0;
}
