#include <stdio.h>
#include <string.h>
#include <math.h>

char s[11];
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int a,b,na=0,j=0,flag=1;
        scanf("%d%d",&a,&b);
        sprintf(s,"%d",a);
        for(int k=strlen(s)-1;k>=0;k--){
            if(flag&&s[k]=='0'){
                j++;
                continue;
            }
            flag=0;
            na+=(s[k]-48)*pow(10,k);
        }
        na*=pow(10,j);
        printf("%d\n",na*b);
    }
    return 0;
}