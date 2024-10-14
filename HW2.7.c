#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(){
	int i=0;
	for(;i<=360;i+=5){
		printf("%d°的正弦值%f；余弦值%f\n",i,sin((double)i*PI/180.0),cos((double)i*PI/180.0));
	}
}
