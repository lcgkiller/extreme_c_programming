#include <stdio.h>

int main(void){
    int i;
    int reverse; // 4자리 양수를 뒤집은 수를 저장하는 변수
    int result;  
    scanf("%d", &i);

    // 1의 자리 -> 1000의 자리,  10의 자리 -> 100의 자리,  100의 자리 -> 10의 자리,  1000의 자리 -> 1의 자리
    reverse = ( i % 10 * 1000) + ( i / 10 % 10 * 100 ) + ( i / 100 % 10 * 10 ) + ( i / 1000 % 10 * 1);

    // input값이 더 크면 그대로 출력, 아니라면 *(-1)상태로 출력
    result = ( i > reverse ) ? (i-reverse) : (i-reverse) * (-1);

    printf("%d\n", result);

    return 0;
}