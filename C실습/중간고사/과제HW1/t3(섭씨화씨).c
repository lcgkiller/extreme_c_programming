#include <stdio.h>

int main(void){
    int input;
    float result;
    scanf("%d", &input); // ���� �µ� �Է�

    result = input * (9.0 / 5.0) + 32; // �� �ս��� �����ϱ� ���� 9.0 / 5.0���� ����
    printf("%.02f", result); // �Ҽ��� ��° �ڸ����� ���

    return 0;
}