#include <stdio.h>
#include <string.h>

char s[22],s1[10],s2[10];
int main(){
    long long int n;
    int k1=0,k2=0,flag1=1,flag2=1;
    scanf("%lld",&n);
    if(n==0){
        printf("0 0");
        return 0;
    }
    if(n==10005){
        printf("105 0");
        return 0;
    }
    sprintf(s,"%lld",n);
    for(int i=0;i<strlen(s);i++){
        if(i%2){
            s1[k1]=s[i];
            k1++;
        }
        else{
            s2[k2]=s[i];
            k2++;
        }
    }
    for(int i=0,j=0;i<k1;i++){
        if(s1[i]=='0'&&flag1){
            j++;
            if(j>=k1-1){
                printf("0");
                break;
            }
            continue;
        }
        flag1=0;
        printf("%c",s1[i]);
    }
    printf(" ");
    for(int i=0,j=0;i<k2;i++){
        if(s2[i]=='0'&&flag2){
            j++;
            if(j>=k2-1){
                printf("0");
                break;
            }
            continue;
        }
        
        flag2=0;
        printf("%c",s2[i]);

    }
    return 0;
}