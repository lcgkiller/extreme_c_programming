#include<stdio.h>

int main(void){

	int num; // variable for input number
    int i;

	scanf("%d", &num); // input number

    while(num>0) { // 
        printf("%d", num % 10); // num�� ���� 10���� ���� ������
        num = num / 10; // num�� ���� 10���� ������.
    }
    return 0;
}