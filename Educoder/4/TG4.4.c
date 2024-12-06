#include <stdio.h>
#include <math.h>
#include <string.h>

char s[5];
char s2[5];

void min(){
    int i, j, temp;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (s[j] > s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }   
        }
    }
    
}
void max(){
    for(int i=3; i>=0; i--){
        s2[3-i] = s[i];
        //printf("3-i=%d,i=%d,s[i]=%c\n",3-i,i,s[i]);
    }
}
int prs(char s[]){
    int sum=0;
    
    for(int i=0;i<=3;i++){
        sum+=((int)s[i]-48)*pow(10,3-i);
    }
    return sum;
}
int main(){
    int n;
    char sori[5];
    scanf("%d",&n);
    sprintf(s,"%04d",n);
    sprintf(sori,"%s",s);
    min();
    max();
    printf("%s-%s=%d\n",s2,s,prs(s2)-prs(s));
    
    while(prs(s2)-prs(s)!=6174){
        sprintf(s,"%04d",prs(s2)-prs(s));
        min();
        max();
        printf("%s-%s=%d\n",s2,s,prs(s2)-prs(s));
    }
    
}