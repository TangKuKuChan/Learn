#include<stdio.h>
#include<math.h>
int main(void){ 
    double sum=0;
    for(int i=1;i<=100;i++){
        sum+=1.0/(pow(-1.0,(double)(i+1))*(double)i);
    }
    printf("%.3lf",sum);
    return 0;
}
