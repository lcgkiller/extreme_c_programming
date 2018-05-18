#include <stdio.h>

int main(void){
    int num;
    int i;
    int result=1;

    scanf("%d", &num);
    for(i=1; i<=num; i++){
        result *= i;
    }
    printf("%d\n", result);

    return 0;
}