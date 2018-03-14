#include <stdio.h>

int main(){
    int arr[6] ={1,2,3,4,5,6};
    int * startIdx = &arr[0];
    int * endIdx = &arr[5];
    int i, temp;

    for(i=0; i<3; i++){
        temp = *(startIdx+i);
        *(startIdx+i) = *(endIdx-i);
        *(endIdx-i) = temp;
    }

    for(i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}