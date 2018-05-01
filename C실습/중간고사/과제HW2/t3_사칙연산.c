#include <stdio.h>

int main(void){
    // 정수 3개 입력
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
 
    if (a+b==c) printf("+\n"); // a+b==c이면 + 출력
    if (a-b==c) printf("-\n"); // a-b==c이면 - 출력
    if (a*b==c) printf("*\n"); // a*b==c이면 * 출력
    if (a/b==c) printf("/\n"); // a/b==c이면 / 출력
    if (a+b!=c && a-b!=c && a*b!=c && a/b!=c) printf("Incorrect\n"); // 사칙연산에 해당되지 않으면 Incorrect 출력

    return 0;
}