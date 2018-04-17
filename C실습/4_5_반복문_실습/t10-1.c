#include <stdio.h>

int main(void){
    int num;
    int i;
    int result=0;

    scanf("%d", &num);


    while(num!=0){
        result += (num % 10);
        num /= 10;
    }
    printf("%d\n", result);
    return 0;
}