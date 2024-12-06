#include <stdio.h>

int main(){
    int N,M;
    int a,b,c;
    char fh;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&M);
        int pass=0;
        for(int k=1;k<=M;k++){
            scanf("%d%c%d=%d",&a,&fh,&b,&c);
            if(fh=='+'){
                if(a+b==c){
                    pass++;
                }
            }
            else if(fh=='-'){
                if(a-b==c){
                    pass++;
                }
            }
            else if(fh=='*'){
                if(a*b==c){
                    pass++;
                }
            }
            else if(fh=='/'){
                if(b==0){
                    continue;
                }
                if(a/b==c){
                    pass++;
                }
            }
        }
        //printf("pass=%d\n",pass);
        printf("%.2f\n",100.00*((float)pass/(float)M));
    }
}