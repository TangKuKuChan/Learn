#include <stdio.h>

int isChigayi(int a){
    int sum1=0,sum2=0;
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
        //printf("%d",sum1);
        if(sum1<=a){
            return 0;
        }
        return sum1;
    }
    else{
        return 0;
    }

}

int main(){
    int k;
    for(int i=1;i<=3000;i++){
        k=isChigayi(i);
        if(k){
            printf("(%d,%d)",i,k);
        }
    }
    return 0;
}

