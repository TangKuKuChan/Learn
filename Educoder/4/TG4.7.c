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
    double a,b,c,d,fz,fm;
    char js;
    
    while(scanf("%lf/%lf%c%lf/%lf",&a,&b,&js,&c,&d)==5){
        double res;
        if(js=='+'){
            res=(a/b)+(c/d);
        }
        else{
            res=(a/b)-(c/d);
        }
        if(isZS(res)){
            printf("%.0lf\n",res);
        }
        else{
            fm = 10000/gcd(10000,(int)(res*10000));
            fz = (int)(res*10000)/gcd(10000,(int)(res*10000));
            if(fm<0||fz<0){
                printf("-%.0lf/%.0lf\n",fabs(fz),fabs(fm));
            }
            else{
                printf("%.0lf/%.0lf\n",fabs(fz),fabs(fm));
            }
        }
    }
}