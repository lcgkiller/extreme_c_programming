#include <stdio.h>

int main(void){
    int dan1, dan2; // �� ������ �����ϴ� ����
    int i, j;

    scanf("%d %d", &dan1, &dan2); // �� �Է�

    for(i=1; i<10; i++){ // 1���� 9���� ���
        for(j=dan1; j<=dan2; j++){
            printf("%dX%d=%2d\t", j, i, j*i);
        }
        printf("\n");
    }

    return 0;
}