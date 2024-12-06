#include <stdio.h>

int main(){
    double fz=1,fm=1,sum=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fz*=i;
        fm*=2*i+1;
        sum+=(double)fz/(double)fm;
        //printf("fz=%d,fm=%d\n",fz,fm);
    }
    printf("%.10lf",sum+1.0);
}