#include <stdio.h>

int main(void){
    int arr[9][3];
    int i=0, j=0;

    for(i=0; i<3; i++){
        for(j=0; j<9; j++){
            arr[j][i] = (i+2) * (j+1);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<9; j++){
            printf("%4d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}