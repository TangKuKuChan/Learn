#include <stdio.h>
int b[32];
int main(){
    int a;
    while(scanf("%d",&a)>0){
        if(a==0){
            printf("0\n");
            continue;
        }
        int shang=a,yushu,k=0;
        while(shang>=1){
            yushu=shang%2;
            shang/=2;
            b[k]=yushu;
            k++;
        }
        for(int i=k-1;i>=0;i--){
            printf("%d",b[i]);
            fflush(stdout);
        }
        printf("\n");
    }
}