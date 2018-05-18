#include <stdio.h>

int add_digits(int n){
    int origin = n;
    int sum=0;

    while(n != 0){
        sum += n % 10;
        n /= 10;
    }

    printf("%d %d",origin, sum);
}

int main(void){
    int num;
    scanf("%d", &num);

    add_digits(num);

    return 0;
}