#include <stdio.h>

void Uclid(int num1, int num2){
    int quotient = num2 / num1; // �� 
    int remainder = num2 % num1; // ������
    if(remainder==0){
        printf("�ִ����� : %d\n", num1);
    }
    else{
        while(remainder!=0){
            quotient = remainder;
            num2 = num1;
            remainder = num2 % quotient;
        }
        printf("�ִ����� : %d\n", quotient);
    }
}

int main(void){
    int num1, num2;
    printf("�� ���� ���� �Է� : ");
    scanf_s("%d %d", &num1, &num2);

    if(num1<=num2){
        Uclid(num1, num2);
    }
    else{
        Uclid(num2, num1);
    }

}