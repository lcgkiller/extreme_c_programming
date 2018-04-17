#include <stdio.h>

int main(void){
    int num;
    int result=0;
    int temp=0;

    scanf("%d", &num);

    result = num;
    while(result >= 10){
        num = result;
        result = 0;

        while (num!=0){
            result += num % 10;
            num /= 10;
        }
    }
    printf("%d\n", result);
    return 0;
}