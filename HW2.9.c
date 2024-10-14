#include <stdio.h>

int main(){
	int maxz,minz,maxf,minf,zs=0,fs=0,a;
	for(int i=0;i<20;i++){
		scanf("%d",&a);
		if(a>0){
			if(zs==0){
				maxz=minz=a;
				zs++;
				continue;
			}
			if(maxz<=a){
				maxz=a;
				continue;
			}
			if(minz>=a){
				minz=a;
				continue;
			}
		}
		else if(a<0){
			if(fs==0){
				maxf=minf=a;
				fs++;
				continue;	
			}
			if(maxf<=a){
				maxf=a;
				continue;
			}
			if(minf>=a){
				minf=a;
				continue;
			}
		}
	}
	printf("最大正整数为%d\n最小正整数为%d\n最大负整数为%d\n最小负整数为%d",maxz,minz,maxf,minf);
} 
