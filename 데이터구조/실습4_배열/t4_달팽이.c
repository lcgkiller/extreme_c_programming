#include <stdio.h>
#include <stdlib.h>


int main(void){
    int cnt = 1;
    int sw = 1;
    int i, j;
    int width, height;
    int row = -1, col=0;

    scanf("%d %d", &height, &width);
    int max_row = width;
    int max_col = height - 1;

    int arr[height][width];

    while(cnt<=width*height){
        for(i=0; i<max_row; i++){
            row += sw;
            arr[col][row] = cnt ++;
        }
        max_row--;

        if (max_row < 0){
            break;
        }
        
        for(j=0; j<max_col; j++){
            col += sw;
            arr[col][row] = cnt++;
        }
        max_col--;

        if(max_col<0){
            break;
        }

        sw *= -1;
    }

    for(i=0; i<height; i++){
        for(j=0; j<width; j++){
            printf(" %3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}