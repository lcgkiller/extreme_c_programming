#include <stdio.h>

int main(void){
    int num;
    int i;
    int result=0;

    scanf("%d", &num);


    while(1){
        result += (num % 10);
        num /= 10;
        if (num == 0) break;

    }
    printf("%d\n", result);
    return 0;
}