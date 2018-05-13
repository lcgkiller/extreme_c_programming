#include <stdio.h>

int main(void){
    int num;
    int x[10];
    int e[10]; // 짝수 저장
    int o[10]; // 홀수 저장
    int i=0;

    int cnt1=0, cnt2=0; // 짝수 카운트, 홀수 카운트
    scanf("%d", &num);

    for(i=0; i<num; i++){ // 배열 입력
        scanf("%d", &x[i]);
    }

    for(i=0; i<num; i++){
        if (x[i] % 2 == 0){ // 2로 나눠떨어지면
            e[cnt1] = x[i]; // 짝수 저장 배열에 저장
            cnt1++;         // 짝수 카운트 증가
        }
        else{
            o[cnt2] = x[i]; // 홀수 저장 배열에 저장
            cnt2++;         // 홀수 카운트 증가
        }
    }

    printf("Even:\n");
    if(cnt1==0) printf("none\n"); // cnt=0이면 none 출력
    for(i=0; i<cnt1; i++){  // 짝수 배열 출력
        printf("%d\n", e[i]);
    }
    printf("Odd:\n");
    if(cnt2==0) printf("none\n"); // cnt=0이면 none 출력
    for(i=0; i<cnt2; i++){ // 홀수 배열 출력
        printf("%d\n", o[i]);
    }
}