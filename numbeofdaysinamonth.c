#include<stdio.h>
int main(){
    int year, month;
    scanf("%d %d", &month, &year);
    if(month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)
        printf("Number of Days = 31");
    else if((month == 2) && ((year%400 == 0)||(year%4 == 0 && year%100 != 0))){
        printf("No. of Days = 29");
    }
    else if(month == 2)
        printf("No. of Days = 28");
    else
        printf("No of Days = 30");
    return 0;
}