#include <stdio.h>

int main(void){
    int dan1, dan2; // 몇 단인지 저장하는 변수
    int i, j, k;
    int cnt = 1;
    scanf("%d %d", &dan1, &dan2); // 단 범위 입력

    for(i=dan1; i<=dan2; i+=2){         // dan1 ~ dan2 범위까지 2단씩 출력하기 위한 증감식 작성
        printf("%d\n", i);
        for(j=1; j<10; j++){            // *1, *2, *3, ... , *9
            for(k=i; k<=i+1; k++){      // 2단씩 출력하기 위한 조치
                if (k > dan2){          // 만약 dan2의 범위를 넘어버리면 출력하지 않음
                    break;
                }
                printf("%d*%d=%2d\t", k, j, k*j); // 구구단 출력문
            }
            printf("\n"); // 개행
        }
        printf("\n"); // 개행
    }
    return 0;
}