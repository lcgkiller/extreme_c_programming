#include <stdio.h>

int main(void){
    int n; // 입력 변수
    int i, j, k; // 반복문 변수

    scanf("%d", &n);

    for(i=1; i<=(n*2)/2; i++){
        for(j=1; j<=n-i; j++){ // 공백 출력
            printf(" "); // 공백의 개수는 n-1, n-2, ..., 0 까지
        }
        for(k=1; k<=(i*2)-1; k++){ // 별찍기 부분(바깥쪽 for문에 의해 영향을 받는다)
            printf("*");
        }   
        printf("\n");
    }
    for(i=n-1; i>=0; i--){
        for(j=1; j<=n-i; j++){ // 공백 출력
            printf(" "); // 공백의 개수는 1, 2, ... , n-1 까지
        }
        for(k=i*2-1; k>0; k--){ // 별찍기 부분(바깥쪽 for문에 의해 영향을 받는다)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

