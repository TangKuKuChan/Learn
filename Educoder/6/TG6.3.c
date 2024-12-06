#include <stdio.h>
#include <math.h>

int panda[101]={1,1,1,1,2};

int pds(int n){
    if(n<=4){
        return 1;
    }
    else{
        return pds(n-1)+pds(n-4);
    }
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",pds(a)%((long long)pow(10,7)+7));
}