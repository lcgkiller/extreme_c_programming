#include <stdio.h>

int main(void){
    int n; // �Է� ����
    int i, j, k; // �ݺ��� ����

    scanf("%d", &n);

    for(i=1; i<=(n*2)/2; i++){
        for(j=1; j<=n-i; j++){ // ���� ���
            printf(" "); // ������ ������ n-1, n-2, ..., 0 ����
        }
        for(k=1; k<=(i*2)-1; k++){ // ����� �κ�(�ٱ��� for���� ���� ������ �޴´�)
            printf("*");
        }   
        printf("\n");
    }
    for(i=n-1; i>=0; i--){
        for(j=1; j<=n-i; j++){ // ���� ���
            printf(" "); // ������ ������ 1, 2, ... , n-1 ����
        }
        for(k=i*2-1; k>0; k--){ // ����� �κ�(�ٱ��� for���� ���� ������ �޴´�)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

