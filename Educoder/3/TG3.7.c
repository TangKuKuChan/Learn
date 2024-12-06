#include<stdio.h>
int main()
{

	int n,i,j,sum=0,count=0;
	scanf("%d",&n);
	for(i=n;i>=2&&count<10;i--)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
		{
			sum+=i;
            count++;
		}
	}
    printf("%d",sum);
}
