#include <stdio.h>
#include <string.h>

char s[100];
int main(){
    int r;
    fgets(s,100,stdin);
    for(int i=0;i<100;i++){
        if(s[i]=='\n'){
            r=i;
            break;
        }
    }
    printf("%d\n%s\n",r,s);
    int flag=1,flag2=0;
    for(int i=0;i+strlen(s)-r-1<r;i++){
        flag=1;
        for(int j=0;j<strlen(s)-r;j++){
            printf("比较i,j=%d,%d\n",i,j);
            if(s[i+j]!=s[r+1+j]){
                flag=0;
                break;
            }
        }
        if(flag){
            flag2=1;
            printf("%d\n",i);
        }
    }
    if(!flag){
        printf("-1");
    }
    
}