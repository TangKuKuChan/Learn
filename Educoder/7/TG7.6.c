#include <stdio.h>

int main(){
    int a[10][10],q,p;
    scanf("%d%d",&q,&p);
    for(int i=0;i<q;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d",a[j][i]);
            if(j!=q-1){
                printf(" ");
            }
        }

        printf("\n");
    }
}