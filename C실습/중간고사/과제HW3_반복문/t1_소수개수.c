#include <stdio.h>

int main(void){
    int n; // 양의 정수 N 입력을 저장하는 변수
    int i,j; // 반복문 변수
    int result=0; // 소수의 개수 출력
    int cnt = 0; // 나누어 떨어지는 개수 출력
    scanf("%d", &n); // 입력

    for(i=2; i<n; i++){
        cnt = 0; // 나누어 떨어지는 개수 출력
        for(j=1; j<=i; j++){ // i까지 j++
            if ( i % j == 0){ // 나누어 떨어지면 소수의 개수(cnt)를 한개 증가
                cnt ++;
            }
        }
        if (cnt == 2){ // 만약 나누어떨어지는 개수가 2개라면
            result += 1; // 결과 변수를 하나 증가시킨다.
        }
    }

    printf("%d", result); // 결과변수 출력
    return 0;

}