#include <stdio.h>

void swap(int *p,int *q){
    int tmp=*p;
    *p=*q;
    *q=tmp;
}
void sort(int arr[], int len)
{
    int i,j;

        for (i = 0 ; i < len - 1 ; i++)
    {
                int min = i;
                for (j = i + 1; j < len; j++)     
                        if (arr[j] < arr[min])    
                                min = j;    
                swap(&arr[min], &arr[i]);    
        }
}

int main(){
    int a[10],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n==1){   
        printf("%d",a[0]);
        return 0;
    }
    sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(" ");
        }
    }
}