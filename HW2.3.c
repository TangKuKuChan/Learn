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
		printf("��СֵΪ%d",min);
	}
	else{
		printf("��СֵΪ%d",min);
	}
}
