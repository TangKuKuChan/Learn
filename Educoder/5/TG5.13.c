#include <stdio.h>
#include <stdlib.h>
int getDay(int year,int month,int day){
    int s=0;
    switch(month)
	{
		case 12:  s+=30;      
		case 11:  s+=31;      
		case 10:  s+=30;      
		case  9:  s+=31; 
		case  8:  s+=31; 
		case  7:  s+=30;
		case  6:  s+=31; 
		case  5:  s+=30;
		case  4:  s+=31; 
		case  3:  s+=28;      
		case  2:  s+=31;      
		case  1:  s+=day;     
	}
	if((year%4==0 && year%100!=0 || year%400==0) && month>=3) 
        s++;
    return s;
}

int main(){
    int Y,M1,D1,M2,D2;
    scanf("%d%d%d%d%d",&Y,&M1,&D1,&M2,&D2);
    printf("%d",abs(getDay(Y,M2,D2)-getDay(Y,M1,D1)));
}