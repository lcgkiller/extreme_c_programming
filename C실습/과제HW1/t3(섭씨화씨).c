#include <stdio.h>

int main(void){
    int input;
    float result;
    scanf("%d", &input); // 섭씨 온도 입력

    result = input * (9.0 / 5.0) + 32; // 값 손실을 방지하기 위해 9.0 / 5.0으로 수정
    printf("%.02f", result); // 소숫점 둘째 자리까지 출력

    return 0;
}