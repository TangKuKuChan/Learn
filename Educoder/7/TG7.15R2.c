#include <stdio.h>
#include <string.h>

char s[100];
char s2[50];
int main(){
    fgets(s,100,stdin);
    fgets(s2,50,stdin);
    //printf("%s\n%s",s,s2);
    int flag=1,flag2=0;
    for(int i=0;i+strlen(s2)-1<strlen(s);i++){
        flag=1;
        for(int j=0;j<strlen(s2);j++){
            if(s[i+j]!=s2[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            flag2=1;
            printf("%d\n",i);
        }
    }
    if(!flag2){
        printf("-1");
    }
    
}