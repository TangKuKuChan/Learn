#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}
int isZS(double a){
    if((double)(int)a==a){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a,b,c,d,fz,fm;
    char js;
    
    while(scanf("%d/%d%c%d/%d",&a,&b,&js,&c,&d)==5){
        double res;
        int fz,fm;
        if(js=='+'){
            fz=a*d+c*b;
            fm=b*d;
        }
        else{
            fz=a*d-c*b;
            fm=b*d;
        }
        if(isZS((double)fz/(double)fm)){
            printf("%d\n",fz/fm);
        }
        else{
            int nfz = fz/gcd(fz,fm);
            int nfm = fm/gcd(fz,fm);
            if(nfz<0||nfm<0){
                printf("-%d/%d\n",abs(nfz),abs(nfm));
            }
            else{
                printf("%d/%d\n",abs(nfz),abs(nfm));
            }
            
        }
    }
}