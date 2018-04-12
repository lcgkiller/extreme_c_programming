#include <stdio.h>

int main(void){
    int dan1, dan2; // 몇 단인지 저장하는 변수
    int i, j;

    scanf("%d %d", &dan1, &dan2); // 단 입력

    for(i=1; i<10; i++){ // 1부터 9까지 출력
        for(j=dan1; j<=dan2; j++){
            printf("%dX%d=%2d\t", j, i, j*i);
        }
        printf("\n");
    }

    return 0;
}