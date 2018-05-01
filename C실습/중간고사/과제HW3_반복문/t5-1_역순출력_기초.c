#include<stdio.h>

int main(void){

	int num; // variable for input number
    int i;

	scanf("%d", &num); // input number

    while(num>0) { // 
        printf("%d", num % 10); // num의 값을 10으로 나눈 나머지
        num = num / 10; // num의 값을 10으로 나눈다.
    }
    return 0;
}