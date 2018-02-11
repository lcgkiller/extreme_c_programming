#include <stdio.h>

int SquareByValue(int num){
    int result;
    result = num * num;
    return result;
}

int SquareByReference(int * num){
    int ref = *num;
    int result;

    result = ref * ref;
    return result;
}


int main(void){
    int input = 5;
    int result1, result2;

    result1 = SquareByValue(input);
    printf("값에 의한 호출 : %d\n", result1);

    result2 = SquareByReference(&input);
    printf("참조에 의한 호출 : %d\n", result2);
    return 0;
}