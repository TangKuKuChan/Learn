#include <stdio.h>

int main(){
    int a,sum=0,m=0,p=0,q=0;
    for(int i=1;i<=35;i++){
        scanf("%d",&a);
        if(a==1){
            sum+=1000;
            m++;
        }
        else if(a==2){
            sum+=500;
            p++;
        }
        else if(a==3){
            sum+=200;
            q++;
        }
        
    }
    if(m>=3){
        sum+=1000;
    }
    if(p>=6){
        sum+=500;
    }
    if(q>=10){
        sum+=200;
    }
    printf("%d",sum);
    return 0;
}