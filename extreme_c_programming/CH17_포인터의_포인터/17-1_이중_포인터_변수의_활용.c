#include <stdio.h>

void MaxAndMin(int *ptrArr, int **mxPtr, int **mnPtr){
    int * max;
    int * min;
    int i = 0;

    max=min=&ptrArr[0];

    for(i=0; i<5; i++){
        if (*max < ptrArr[i])
            max = &ptrArr[i];
        if (*min > ptrArr[i])
            min = &ptrArr[i];
    }
    *mxPtr = max;
    *mnPtr = min;
}

int main(void){
    int arr[5];
    int i=0;
    int * maxPtr;
    int * minPtr;

    for(i=0; i<5; i++){
        printf("정수 입력 : ");
        scanf("%d", &arr[i]);
    }
    MaxAndMin(arr, &maxPtr, &minPtr);
    printf("max : %d, min : %d \n", *maxPtr, *minPtr);

    return 0;
}