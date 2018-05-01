#include <stdio.h>

int main(void){
    int arr[100][100];
    int row, col;
    int i=0, j=0;
    int start=0;
    int cnt =0;
    
    scanf("%d %d", &row, &col);
    int loop = row + col - 1; // 가장 마지막 for문은 N*M-1만큼 돌아야 함. EX) 4*5배열은 9번 대각선을 채워야 한다.

    for(cnt=0; cnt < loop; cnt++){
        for(i=0; i<row; i++){ // 가로줄은 row만큼 for문 반복
            j = cnt - i; // j=세로 칼럼을 의미
            if (j>=0 && j<col){
                arr[i][j] = ++start;
            }
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf(" %3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}