#include <stdio.h>

int main(void){
    int a, b,c;
    int min, max;
    scanf("%d %d %d", &a, &b, &c);
    min = max = a;

    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (max < b)
        max = b;
    if (max < c)
        max = c;


    printf("%d %d", max, min);

    return 0;
}