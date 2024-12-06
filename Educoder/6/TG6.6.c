#include <stdio.h>

int adder(int n){
    if (n == 1)					
	{
		return 1;
	}
    else{
        return n+adder(n-1);
    }

}


int main(){
    int a;
    scanf("%d",&a);
    printf("%d",adder(a));
}