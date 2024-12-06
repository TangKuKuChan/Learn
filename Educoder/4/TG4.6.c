#include <stdio.h>
#include <math.h>
#include <string.h>

char s[12];
char s2[12];
int main(){
    int n,pf,flag=1;
    scanf("%d",&n);
    for(int i=n;;i++){
        sprintf(s,"%d",i);
        pf=pow(i,2);
        sprintf(s2,"%d",pf);
        flag=1;
        for(int k=strlen(s2)-1,j=strlen(s)-1;j>=0;k--,j--){
            if(s2[k]!=s[j]){
                //printf("第%d s2[k]=%c,s[j]=%c,s2=%s,s=%s\n",i,s2[k],s[j],s2,s);
                flag=0;
                break;
            }
        }
        if(flag){
            printf("%d",i);
            break;
        }
    }

}