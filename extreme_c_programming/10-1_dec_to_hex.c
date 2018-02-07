#include <stdio.h>

int main(void){
    int dec;
    printf("10진수 정수 입력 : ");
    scanf_s("%d", &dec);
    printf("16진수 : %X \n", dec);
}