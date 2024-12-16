#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        for(int j=i;j<strlen(s);j++){
            printf("%c",s[j]);
        }
        printf("\n");
    }
}