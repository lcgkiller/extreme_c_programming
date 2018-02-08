#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int arrLen = sizeof(arr) / sizeof(int);
    int * ptr = arr;
    int i=0;
    
    for(i=0; i<arrLen; i++){
        *(ptr+i) += 2;
    }
    
    for(i=0; i<arrLen; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}