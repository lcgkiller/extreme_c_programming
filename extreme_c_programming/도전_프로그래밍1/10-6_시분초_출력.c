#include <stdio.h>

int main(void){
    int sec;
    int h, m, s;

    printf("ÃÊ(second) ÀÔ·Â : ");
    scanf("%d", &sec);

    h = (int)sec/3600;
    m = (int)(sec - (h*3600)) / 60;
    s = sec - h*3600 - m*60;

    printf("h : %d, m : %d, s : %d", h, m, s);

    return 0;
}