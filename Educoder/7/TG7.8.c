#include <stdio.h>

int main(){
    int n;
    int a[15][15];
    scanf("%d",&n);
    int count=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++,count++){
                a[i][j]=count;
            }
        }
        else{
            for(int j=n-1;j>=0;j--,count++){
                a[i][j]=count;
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