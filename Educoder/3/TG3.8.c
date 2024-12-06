#include<stdio.h>
#include<math.h>

int main()
{
    double x0=0.0,x1=0.0;
    while(1){
        x1=cos(x0);
        if(fabs(x0-x1)<0.000001){
            break;
        }
        else{
            x0=x1;
        }
    }
    printf("root=%0.6lf",x0);
}