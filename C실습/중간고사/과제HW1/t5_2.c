#include <stdio.h>

int main(void){
    int input;
    int result = 0;
    int a, b, c, A, B, C;
    int i=0;
    scanf("%d", &input);

    a = (input / 100 % 2) == 0 ? 1 : 0;         // 나누어 떨어지면 100의 자리수는 참
    b = ((input / 10) % 10 % 2) == 0 ? 1 : 0;   // 나누어 떨어지면 10의 자리수는 참
    c = (input % 10 % 2) == 0 ? 1: 0;           // 나누어 떨어지면 1의 자리수는 참

    A = input / 100 % 10;   // 100의 자리수 나머지
    B = input / 10 % 10;    // 10의 자리수 나머지
    C = input % 10;         // 1의 자리수 나머지

    result += a ? A : 0; // a가 참이면 100의 자리수를 더한다.
    result += b ? B : 0; // b가 참이면 10의 자리수를 더한다.
    result += c ? C : 0; // c가 참이면 1의 자리수를 더한다.

    printf("%d\n", result);
    return 0;
}

