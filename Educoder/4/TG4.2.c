#include <stdio.h>
#include <string.h>

char s[11];
int main(){
    int n,flag=1;
    scanf("%d",&n);
    sprintf(s,"%d",n);
    //puts(s);
    for(int i=strlen(s)-1;i>=0;i--){
        if(s[i]=='0'&&flag){
            continue;
        }
        flag=0;
        printf("%c",s[i]);
    }
    return 0;
}