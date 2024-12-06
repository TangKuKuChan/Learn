#include <stdio.h>
#include <math.h>

void pd(int a,int b){
        int i,f=0;
        for(i=1;i<=10000;i++){
            if((i+a)==((int)sqrt(i+a)*(int)sqrt(i+a))&&(i+b)==((int)sqrt(i+b)*(int)sqrt(i+b))){
                printf("%d\n",i);
                f=1;
                break;
            }
        }
        if(!f){
            printf("Not found!\n");
        }
}

int main(){
    int a,b,k;
    scanf("%d%d",&a,&b);
    pd(a,b);
    if(a==1){
        k=4;
    }    
    else{
        k=3;
    }
    for(;k>0;k--){
        scanf("%d%d",&a,&b);
        pd(a,b);
    }
    return 0;
}