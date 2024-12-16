#include <stdio.h>

int main(){
    int n,count=1,cirs,a[30][30];
    scanf("%d",&n);
    if(n%2==0){
        cirs=n/2;
    }
    else{
        cirs=n/2+1;
    }
    for(int i=1;i<=cirs;i++){
        for(int j=1;j<=4;j++){
            switch (j)
            {
            case 1:
                for(int k=i-1;k<=n-i&&count<=n*n;k++,count++){
                    a[i-1][k]=count;
                    //5 i-1=0 k-[0,]
                }
                break;
            case 2:
                for(int k=i;k<=n-i&&count<=n*n;k++,count++){
                    a[k][n-i]=count;
                    //k=1 k-[1,4]
                }
                break;
            case 3:
                for(int k=n-i-1;k>=i-1&&count<=n*n;k--,count++){
                    a[n-i][k]=count;
                    //5 n-i=4 k-[]
                }
                break;
            case 4:
                for(int k=n-i-1;k>=i&&count<=n*n;k--,count++){
                    a[k][i-1]=count;
                }
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%03d",a[i][j]);
            if(j!=n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}