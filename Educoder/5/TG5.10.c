#include <stdio.h>

int isA(int a){
    int shang=a,yushu,k=0,one=0;
    while(shang>=1){
        yushu=shang%2;
        shang/=2;
        if(yushu==1){
            one++;
        }
        k++;
    }
    return (one>k-one)?1:0;
}



int main(){
    int k1,k2,sum1=0;
    scanf("%d%d",&k1,&k2);
    for(int i=k1;i<=k2;i++){
        if(isA(i)){
            sum1++;
        }
    }    
    printf("%d %d",sum1,k2-k1-sum1+1);
}