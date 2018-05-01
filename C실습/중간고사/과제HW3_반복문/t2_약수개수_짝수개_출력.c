#include <stdio.h>

int main(void)
{
    int m, n; // 양의 정수 m, n
    int i, j; // 반복문 변수

    int result;

    scanf("%d %d", &m, &n);
    
    if (m<=n){
        for (i=m; i<=n; i++){
            int cnt = 0; // 약수의 개수가 짝수인지 검사하기 위한 변수
            for (j=1; j<=i; j++){
                if (i%j==0) { // 1부터 i까지 약수 개수 검사
                    cnt+=1; // 약수의 개수 증가
                }
            }
            if (cnt % 2 == 0) // 약수의 개수가 짝수이면
                result+=1; // 결과변수를 하나 증가시킨다.
            cnt = 0; // cnt 초기화
        }
    }

    else if(n<=m){
        for (i=n; i<=m; i++){
            int cnt = 0; // 약수의 개수가 짝수인지 검사하기 위한 변수
            for (j=1; j<=i; j++){ // m의 약수 개수를 검사하기 위한 반복문
                if (i%j==0) cnt+=1;
            }
            if (cnt % 2 == 0) // 약수의 개수가 짝수이면
                result+=1; // 결과변수를 하나 증가시킨다.
            cnt = 0; // cnt 초기화
        }
    }

    printf("%d", result);
    return 0;
} 