#include <stdio.h>

int main(void){
    int dan; // �� ������ �����ϴ� ����
    int i;

    scanf("%d", &dan); // �� �Է�

    for(i=1; i<=9; i++){ // 1���� 9���� ���
        printf("%dX%d=%2d\n", dan, i, dan*i);
    }

    return 0;
}