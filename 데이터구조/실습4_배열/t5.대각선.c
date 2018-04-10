#include <stdio.h>

int main(void){
    int arr[100][100];
    int row, col;
    int i=0, j=0;
    int cnt=0;
    int loop_count =0;
    
    scanf("%d %d", &row, &col);
    int loop = row + col - 1;

    for(loop_count=0; loop_count < loop; loop_count++){
        for(i=0; i<row; i++){
            j = loop_count - i;
            if (j>=0 && j<col){
                arr[i][j] = ++cnt;
            }
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}