#include <stdio.h>

int main(void){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arrLen = sizeof(arr) / sizeof(int);
    int * ptrStart = &arr[0];
    int * ptrEnd = &arr[5];
    int temp;
    int i;

    for(i=0; i<3; i++){
        temp = *ptrStart;
        *ptrStart = *ptrEnd;
        *ptrEnd = temp;
        ptrStart++;
        ptrEnd--;
    }

    for(i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
  
    return 0;
}