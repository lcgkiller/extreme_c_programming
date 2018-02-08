#include <stdio.h>

void Uclid(int num1, int num2){
    int quotient = num2 / num1; // 몫 
    int remainder = num2 % num1; // 나머지
    if(remainder==0){
        printf("최대공약수 : %d\n", num1);
    }
    else{
        while(remainder!=0){
            quotient = remainder;
            num2 = num1;
            remainder = num2 % quotient;
        }
        printf("최대공약수 : %d\n", quotient);
    }
}

int main(void){
    int num1, num2;
    printf("두 개의 정수 입력 : ");
    scanf_s("%d %d", &num1, &num2);

    if(num1<=num2){
        Uclid(num1, num2);
    }
    else{
        Uclid(num2, num1);
    }

}