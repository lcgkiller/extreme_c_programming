#include <stdio.h>

int main(void){
    char c; // 사칙연산 할 기호 입력
    int a, b; // 두 정수 입력

    scanf("%c %d %d", &c, &a, &b);

    switch(c){ // 사칙연산을 입력받는 문자 c를 조건문으로 세운다.
        case '+': // +를 입력받은 경우
            printf("%d", a+b);
            break;
        case '-': // -를 입력받은 경우
            printf("%d", a-b);
            break;
        case '*': // *를 입력받은 경우
            printf("%d", a*b);
            break;
        case '/': // 나누기(/)를 입력받은 경우
            printf("%.1f", (double)a/b);
            break;
        default:  // 그외 문자를 입력받은 경우
            printf("none");
            break;
    }
    return 0;
}