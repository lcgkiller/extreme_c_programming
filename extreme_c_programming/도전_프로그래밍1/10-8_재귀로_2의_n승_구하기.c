#include <stdio.h>

int Recursive(int input){
    int result = 2;

    if (input==1)
        return 1;
    
    return result * Recursive(input-1);
}

int main(void){
    int input;

    printf("정수입력 : ");
    scanf("%d", &input);
    printf("2의 %d승은 %d", input, Recursive(input));

    return 0;
}