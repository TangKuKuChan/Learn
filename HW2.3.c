#include <stdio.h>

int main(){
	int min,a;
	scanf("%d",&min);
	scanf("%d",&a);
	if(min>=a){
		min=a;
	}
	scanf("%d",&a);
	if(min>=a){
		min=a;
		printf("最小值为%d",min);
	}
	else{
		printf("最小值为%d",min);
	}
}
