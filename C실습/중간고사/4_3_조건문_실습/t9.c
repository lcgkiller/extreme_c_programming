#include <stdio.h>

int main(void){
    int year1, month1, day1;
    int year2, month2, day2;
    scanf("%d/%d/%d", &year1, &month1, &day1);
    scanf("%d/%d/%d", &year2, &month2, &day2);

    if (year1 > year2){
        printf("%d/%02d/%02d", year2, month2, day2);
    }
    else if (year1 < year2){
        printf("%d/%02d/%02d", year1, month1, day1);
    }

    else{
        if(year1 == year2){
            if (month1 > month2){
                printf("%d/%02d/%02d", year2, month2, day2);
            }
            else if (month1 == month2){
                if (day1 > day2){
                    printf("%d/%02d/%02d", year2, month2, day2);
                }
                else if (day1 < day2){
                    printf("%d/%02d/%02d", year1, month1, day1);
                }
                else{
                    printf("%d/%02d/%02d*", year1, month1, day1);
                }
            }
            else{
                printf("%d/%02d/%02d", year1, month1, day1);
            }
        }
    }
    return 0;
}