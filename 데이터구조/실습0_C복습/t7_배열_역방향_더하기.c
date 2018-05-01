#include <stdio.h>

#include <stdlib.h>

int main(void){
    int * arrA;
    int * arrB;
    int input;
    int i;
    int total = 0;

    scanf("%d", &input); // 배열의 크기 입력
    
    arrA = (int *)malloc(sizeof(int) * input);
    arrB = (int *)malloc(sizeof(int) * input);

    for(i=0; i<input; i++){
        scanf("%d", &arrA[i]); // arrA 입력
    }

    for(i=0; i<input; i++){
        scanf("%d", &arrB[i]); // arrB 입력
    }

    for(i=0; i<input; i++){
        total = arrA[i] + arrB[input-1-i];
        printf("%d ", total);
        total = 0;
    }

    free(arrA);
    free(arrB);

    return 0;
}