#include <stdio.h>

int main(void){
    int a, b, c;
    int sum;
    double avg;

    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    avg = sum / 3.0f;

    if (avg>=75.0)
        printf("%.2f\n%s", avg, "A");
    else if(avg>=50.0)
        printf("%.2f\n%s", avg, "B");
    else
        printf("%.2f\n%s", avg, "F");
    return 0;
}