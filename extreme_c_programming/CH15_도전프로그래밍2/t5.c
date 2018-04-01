#include <stdio.h>

int main(){
    int arr[5] = {4, 3, 5, 1, 2};
    int i, j;
    int temp;
    int max;

    for(i=0; i<4; i++){
        max = arr[i];
        for(j=0; j<(4-i); j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}