#include <stdio.h>

void swap(int * ptr1, int * ptr2){
    int temp=* ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(){
    int arr[5] = {37, 14, 17, 41, 36};
    int i;
    while(1){
        int swapped = 0;
        for (i=1; i<5; i++){
            if (arr[i-1] > arr[i]){
                swap(&arr[i-1], &arr[i]);
                swapped = 1;
            }
            swapped = 0;
        }
        if (!swapped) break;
    }

    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
}