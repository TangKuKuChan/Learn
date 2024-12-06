#include <stdio.h>
unsigned arr[2500];
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
    int M,N;
    scanf("%d%d",&M,&N);
    Prinum(14000);
    int i=0;
    for(;i<=sum;i++){
        if(arr[i]<=M){
            continue;
        }
        else{
            break;
        }
    }
    for(int k=1;k<=N;i++){
        if(arr[i+1]-arr[i]==2){
            printf("%u,%u\n",arr[i],arr[i+1]);
            k++;
        }
    }
}