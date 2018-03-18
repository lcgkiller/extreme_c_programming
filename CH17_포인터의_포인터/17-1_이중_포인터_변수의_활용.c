#include <stdio.h>

void MaxAndMin(int * arr, int len, int ** maxPtr, int ** minPtr){
    int * max;
    int * min;
    int i;
    max = min = &arr[0];

    for(i=0; i<len; i++){
        if (*max < arr[i])
            max = &arr[i];
        if (*min > arr[i])
            min = &arr[i];
    }

    *maxPtr = max;
    *minPtr = min;
}

int main(){
    int * maxPtr;
    int * minPtr;
    int arr[5];
    int i;
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    MaxAndMin(arr, sizeof(arr)/ sizeof(int), &maxPtr, &minPtr);

    printf("최대 : %d 최소 : %d\n", *maxPtr, *minPtr);
    return 0;
}