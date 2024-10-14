#include <stdio.h>

int main(){
	int z=0,f=0,l=0,sumz=0,sumf=0;
	int a;
	printf("请输入20个数\n");
	for(int i=0;i<20;i++){
		scanf("%d",&a);
		if(a>0){
			z++;
			sumz+=a;
		}
		else if(a<0){
			f++;
			sumf+=a;
		}
		else{
			l++;
		}
	}
	printf("正整数有%d个，其和为%d，平均值为%.2f\n负整数有%d个，其和为%d，平均值为%.2f\n零有%d个",z,sumz,(float)sumz/(float)z,f,sumf,(float)sumf/(float)f,l);
	return 0;
}
