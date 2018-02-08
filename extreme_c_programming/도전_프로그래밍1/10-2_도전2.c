#include <stdio.h>

void dan(int num1, int num2){
    int i=1;
    if(num1<=num2){
        while(num1<=num2){
            for(i; i<=9; i++){
                printf("%d X %d = %d\n", num1, i, num1*i);
            }
            num1++;
            i = 1;
            continue;
        }
    }
    else{
        while(num1>=num2){
            for(i; i<=9; i++){
                printf("%d x %d = %d\n", num2, i, num2*i);
            }
            num2++;
            i = 1;
            continue;
        }
    }
}

int main(void){
    int num1, num2;
    int i=1;
    printf("두 개의 정수 입력 : ");
    scanf_s("%d %d", &num1, &num2);
    dan(num1, num2);
    return 0;
}