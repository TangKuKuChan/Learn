#include <stdio.h>

int main(){
    int M,N,P,A[10][10],B[10][10],C[10][10];
    scanf("%d%d%d",&M,&N,&P);
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<P;j++){
            scanf("%d",&B[i][j]);
        }
    }
    
    for(int i=0;i<M;i++){
        for(int j=0;j<P;j++){
            int sum=0;
            for(int k=0;k<N;k++){
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<P;j++){
            printf("%d",C[i][j]);
            if(j!=P-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}