#include <stdio.h>
#include <string.h>

int main(){
    int a,b;
    char c;
    while(scanf("%d",&a)!=EOF){
        scanf(" %c",&c);
        if(c=='!'){
            if(a==0){
                printf("1\n");
                continue;
            }
            int res=a;
            a--;
            while(a>=1){
                res*=a;
                a--;
            }
            printf("%d\n",res);
            continue;
        }
        else{
            scanf("%d",&b);
        }
        if(c=='+'){
            printf("%d\n",a+b);
        }
        else if(c=='-'){
            printf("%d\n",a-b);
        }
        else if(c=='*'){
            printf("%d\n",a*b);
        }
        else if(c=='/'){
            if(b==0){
                printf("error\n");
            }
            else{
                printf("%d\n",a/b);
            }
        }
        else if(c=='%'){
            if(b==0){
                printf("error\n");
            }
            else{
                printf("%d\n",a%b);
            }
        }
    }   
}