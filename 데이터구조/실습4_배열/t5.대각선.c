#include <stdio.h>

int main(void){
    int arr[100][100];
    int row, col;
    int i=0, j=0;
    int start=0;
    int cnt =0;
    
    scanf("%d %d", &row, &col);
    int loop = row + col - 1; // ���� ������ for���� N*M-1��ŭ ���ƾ� ��. EX) 4*5�迭�� 9�� �밢���� ä���� �Ѵ�.

    for(cnt=0; cnt < loop; cnt++){
        for(i=0; i<row; i++){ // �������� row��ŭ for�� �ݺ�
            j = cnt - i; // j=���� Į���� �ǹ�
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