#include <stdio.h>
#include <math.h>

double exprs(double x){
    return pow(x,5.0)-2*pow(x,4.0)+pow(x,2.0)-3.0;
}


int main(){
    double ef,x,a=0.0,b=2.0;
    scanf("%lf",&ef);
    double res;
    while(1){
        x=(double)(a+b)/2.0;
        res=exprs(x);
        //printf("%lf\n",res);
        if(fabs(res)<ef){
            printf("%.8lf",x);
            break;
        }
        if(res*exprs(a)>0){
            a=x;
        }
        else{
            b=x;
        }
    }
    return 0;
}