#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int arrLen = sizeof(arr) / sizeof(int);
    int * ptr = &arr[arrLen];
    int sum = 0;

    for(arrLen; arrLen>=0; arrLen--){
        sum += arr[arrLen];
        *ptr--;
    }

    printf("정수의 합 : %d", sum);

    return 0;
}