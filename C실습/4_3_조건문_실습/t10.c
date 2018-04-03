#include <stdio.h>

int main(void){
    int a, b, c;
    int sum=0;
    double avg=0;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3.0f;

    if (avg >= 91.5){
        printf("A");
    }
    else if (avg>=85.5){
        printf("B");
    }
    else if (avg>=80.5){
        printf("C");
    }
    else{
        printf("F");
    }

    if (a==100||b==100||c==100)
        printf("Good");
    if (a<60||b<60||c<60)
        printf("Bad");


    return 0;
}