#include <stdio.h>

int main(void){
    int dan; // 몇 단인지 저장하는 변수
    int i;

    scanf("%d", &dan); // 단 입력

    for(i=1; i<=9; i++){ // 1부터 9까지 출력
        printf("%dX%d=%2d\n", dan, i, dan*i);
    }

    return 0;
}