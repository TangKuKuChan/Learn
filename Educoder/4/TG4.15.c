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
	for (x = 5; x < p; x += 2)   
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
    int n;
    scanf("%d",&n);
    Prinum(n);
    for(int i=0;i<sum;i++){
        for(int k=i+1;k<sum;k++)
        {
            if(arr[i]+arr[k]==n){
                printf("%d=%d+%d\n",n,arr[i],arr[k]);
            }
        }
    }
    return 0;
}