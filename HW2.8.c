#include <stdio.h>

int main(){
	int z=0,f=0,l=0,sumz=0,sumf=0;
	int a;
	printf("������20����\n");
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
	printf("��������%d�������Ϊ%d��ƽ��ֵΪ%.2f\n��������%d�������Ϊ%d��ƽ��ֵΪ%.2f\n����%d��",z,sumz,(float)sumz/(float)z,f,sumf,(float)sumf/(float)f,l);
	return 0;
}
