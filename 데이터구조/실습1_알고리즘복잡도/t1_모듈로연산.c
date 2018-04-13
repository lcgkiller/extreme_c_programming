#include <stdio.h>

int modulo(int a, int b){

    int result;

    while (a>=b){
        a -= b;
    }

    result = a;
    return result;
}

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", modulo(a, b));

    return 0;
}