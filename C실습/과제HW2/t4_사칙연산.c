#include <stdio.h>

int main(void){
    char c; // ��Ģ���� �� ��ȣ �Է�
    int a, b; // �� ���� �Է�

    scanf("%c %d %d", &c, &a, &b);

    switch(c){ // ��Ģ������ �Է¹޴� ���� c�� ���ǹ����� �����.
        case '+': // +�� �Է¹��� ���
            printf("%d", a+b);
            break;
        case '-': // -�� �Է¹��� ���
            printf("%d", a-b);
            break;
        case '*': // *�� �Է¹��� ���
            printf("%d", a*b);
            break;
        case '/': // ������(/)�� �Է¹��� ���
            printf("%.1f", (double)a/b);
            break;
        default:  // �׿� ���ڸ� �Է¹��� ���
            printf("none");
            break;
    }
    return 0;
}