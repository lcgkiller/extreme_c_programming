#include <stdio.h>

void Swap3(int * num1, int * num2, int * num3){

    int temp;

    temp = *num3;
    *num3 = *num2;
    *num2 = *num1;
    *num1 = temp;

    printf("num1 : %d\nnum2 : %d\nnum3 : %d\n", *num1, *num2, *num3);
}

int main(void){
    int num1 = 1;
    int num2 = 3;
    int num3 = 5;

    Swap3(&num1, &num2, &num3);

    return 0;
}