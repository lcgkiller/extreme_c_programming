#include <stdio.h>

void ShowArr(int (*arr)[4]);
void RoatateArr(int (*arr)[4]);

int main(){
    int i,j;    
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    for(i=0; i<4; i++){
        ShowArr(arr);
        RoatateArr(arr);
    }

    return 0;
}

void ShowArr(int (*arr)[4]){
    int i, j;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void RoatateArr(int (*arr)[4]){
    int i,j;
    int temp[4][4];

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            temp[j][3-i] = arr[i][j];
        }
    }
    
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            arr[i][j] = temp[i][j];
        }
    }
}