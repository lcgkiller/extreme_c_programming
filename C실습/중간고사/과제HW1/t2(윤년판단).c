#include <stdio.h>

int main(void){
    int input;
    // 윤년을 입력받음
    scanf("%d", &input);

    // 4로 나누어떨어지는 수 중에서(AND) 100으로 나누어떨어지지 않으면(!=) 윤년 혹은(OR) 400으로 나누어 떨어지며 윤년
    return (input % 4 == 0) && (input % 100 != 0) || (input % 400 == 0) ? printf("L\n") : printf("C\n");
}