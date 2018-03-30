#include <stdio.h>

int main(void){
    int arr[100][100];
    int row, col;
    int i=0, j=0;
    int cnt=1;
    
    scanf("%d %d", &row, &col);
    while(cnt != row * col){
        arr[i][j++] = cnt;
        cnt++;
        arr[i++][j--] = cnt;
        cnt++;
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}