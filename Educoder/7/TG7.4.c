#include <stdio.h>
#include <stdlib.h>

int main() {

    int rows;
    scanf("%d",&rows);
    int **array = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        array[i] = (int *)malloc(rows * sizeof(int));
    }
    for(int i=0;i<rows;i++){
        for(int k=0;k<rows;k++){
            scanf("%d",&array[i][k]);
        }
    }
    int a=0,b=0;
    for(int i=0;i<rows;i++){
        for(int k=i;k<rows;k++){
            a+=array[i][k];
        }
    }
    for(int i=0;i<rows;i++){
        for(int k=0;k<=i;k++){
            b+=array[i][k];
        }
    }
    printf("%d %d",a,b);
    // 释放内存
    for (int i = 0; i < rows; ++i) {
        free(array[i]);
    }
    free(array);
    return 0;
}