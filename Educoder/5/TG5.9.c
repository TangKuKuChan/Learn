#include <stdio.h>
int arr[2500] = { 0 };
int sum=0;

int Prinum(int p){
    
	int x = 0;      
	int i = 0;
	unsigned int count = 0;
	
	arr[sum] = 2;  
	sum++;
	arr[sum] = 3;   
	sum++;
	for (x = 5; x<p; x += 2)   
	{
		for (i = 0;arr[i] * arr[i] <= x; i++)   
		{
			count++;
			if (x % arr[i] == 0)   
			{
				break;
			}
		}
		if (arr[i]*arr[i]>x)     
		{
			arr[sum] = x;   
			sum++;          
		}
	}
}
int main(){
    int N,a;
    scanf("%d",&N);
    Prinum(15000);
    for(int i=1;i<=N;i++){
        scanf("%d",&a);
        if(a==1){
            printf("2 1\n");
            continue;
        }
        for(int k=0;;k++){
            if(a>=arr[k]&&a<arr[k+1]){
                if(a==arr[k]){
                    printf("%d %d\n",a,0);
                }
                else{
                    int l1=a-arr[k];
                    int l2=arr[k+1]-a;
                    if(l1<=l2){
                        printf("%d %d\n",arr[k],l1);
                    }
                    else{
                        printf("%d %d\n",arr[k+1],l2);
                    }
                }
                break;
            }
        }
    }
}