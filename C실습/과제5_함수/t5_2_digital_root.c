#include <stdio.h>

void add_digits(int n){
    int sum=0;

    while(n >= 10){
        sum = 0;
        while(n !=0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    printf("%d", n);
}

int main(void){
    int num;
    scanf("%d", &num);

    add_digits(num);

    return 0;
}