#include <stdio.h>

int isLeapYear(int year){

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) return 1;

    else if (year % 4 == 0 && year % 100 == 0 ) return 0;
    
    else if (year % 4 == 0) return 1;
    

    return 0;
}

int getTotalNumberOfLeapYear(int startYear, int endYear){

    int i;
    int cnt=0;
    for(i=startYear; i<=endYear; i++){
        if (isLeapYear(i)) cnt++;
    }
    return cnt;
}

int main(void){
    int startYear = 0, endYear = 0;
    scanf("%d%d", &startYear, &endYear);
    printf("%d", getTotalNumberOfLeapYear(startYear, endYear));

    return 0;
}