#include <stdio.h>

int add_digits(int n){
    int sum=0;

    while(n >= 10){
        sum = 0;
        while(n !=0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    return n;
}

int main(void){
    int num;
    int min = 99999;
    int result;
    int result2;
    do{
        scanf("%d", &num);
        if(num<0) break;
        int cmp = add_digits(num);
        if (min > cmp){
            min = cmp;
            result2 = num;
            result = cmp;
        }
    }while(num>0);
    printf("%d %d", result2, result);

    return 0;
}