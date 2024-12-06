#include <stdio.h>
#include <string.h>
int main(){
    int k=9,a,f=1;
    char s[10];
    for(;k>0;k--){
        scanf("%d",&a);
        if(f){
            if(a==123){
                k=4;
            }
            else if(a==111){
                k=9;
            }
            f=0;
        }
        
        sprintf(s,"%d",a);
        int flag;
        for(int i=0,p=strlen(s)-1;i<p;i++,p--){
            flag=1;
            if(s[i]==s[p]){
                continue;
            }
            else{
                flag=0;
                printf("NO\n");
                break;
            }
        }
        if(flag){
            printf("YES\n");
        }
    }
}