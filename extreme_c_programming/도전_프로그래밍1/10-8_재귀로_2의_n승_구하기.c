#include <stdio.h>

int Recursive(int input){
    int result = 2;

    if (input==1)
        return 1;
    
    return result * Recursive(input-1);
}

int main(void){
    int input;

    printf("�����Է� : ");
    scanf("%d", &input);
    printf("2�� %d���� %d", input, Recursive(input));

    return 0;
}