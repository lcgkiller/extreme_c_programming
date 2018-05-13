#include <stdio.h>

int main(void){
    int k[10]; // 계수 저장 배열
    int v[10]; // 지수 저장 배열
    int num;
    int coef, expo; // 계수, 지수
    int i;

    scanf("%d", &num); // 항의 수 입력

    for(i=0; i<num; i++){
        scanf("%d %d", &coef, &expo); // 계수, 지수 입력
        k[i] = coef; // 계수 저장
        v[i] = expo; // 지수 저장
    }

    for(i=0 ; i<num; i++){ // 출력
        printf("( %d %d )", k[i], v[i]); 
    }
    return 0;
}