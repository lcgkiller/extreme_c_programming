#include <stdio.h>

int main(void){
    int input;
    // ������ �Է¹���
    scanf("%d", &input);

    // 4�� ����������� �� �߿���(AND) 100���� ����������� ������(!=) ���� Ȥ��(OR) 400���� ������ �������� ����
    return (input % 4 == 0) && (input % 100 != 0) || (input % 400 == 0) ? printf("L\n") : printf("C\n");
}