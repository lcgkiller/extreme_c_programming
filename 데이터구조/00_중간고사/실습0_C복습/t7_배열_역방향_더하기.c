#include <stdio.h>

#include <stdlib.h>

int main(void){
    int * arrA;
    int * arrB;
    int input;
    int i;
    int total = 0;

    scanf("%d", &input); // �迭�� ũ�� �Է�
    
    arrA = (int *)malloc(sizeof(int) * input);
    arrB = (int *)malloc(sizeof(int) * input);

    for(i=0; i<input; i++){
        scanf("%d", &arrA[i]); // arrA �Է�
    }

    for(i=0; i<input; i++){
        scanf("%d", &arrB[i]); // arrB �Է�
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