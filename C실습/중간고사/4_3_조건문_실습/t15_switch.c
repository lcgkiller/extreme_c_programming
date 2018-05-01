#include <stdio.h>

int main(void){
    int a, b, c;
    int sum;
    int select;
    double avg;

    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    avg = sum / 3.0f;

    switch((int)avg/25){
        case 4:
        case 3:
            printf("%.2f\n%s", avg, "A");
            break;
        case 2:
            printf("%.2f\n%s", avg, "B");
            break;
        default:
            printf("%.2f\n%s", avg, "F");
            break;
    }
    return 0;
}