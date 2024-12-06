#include <stdio.h> 
int getWeek(int days){
    char s[9];
    sprintf(s,"%d",days);
    int year=(s[0]-48)*1000+(s[1]-48)*100+(s[2]-48)*10+(s[3]-48);
    int month=(s[4]-48)*10+(s[5]-48);
    int day = (s[6]-48)*10+(s[7]-48);
    //上网学的蔡勒(Zeller)公式
    if (month == 1 || month == 2)
		year--, month += 12;
	int c = year / 100;
	int y = year - c * 100;
	int week = y + y / 4 + c / 4 - 2 * c + 26 * (month + 1) / 10 + day - 1;
	while (week < 0)
		week += 7;
	week %= 7;
    return week;
}
void printWeek(int w){
    switch (w) {
        case 1:printf("Mon"); break; 
        case 2:printf("Tue"); break; 
        case 3:printf("Wed"); break; 
        case 4:printf("Thu"); break; 
        case 5:printf("Fri"); break; 
        case 6:printf("Sat"); break; 
        case 0:printf("Sun"); break;  
    }
}

int main(){
    int date;
    scanf("%d",&date);
    int week = getWeek(date);
    printWeek(week);
    
	return 0;
}
