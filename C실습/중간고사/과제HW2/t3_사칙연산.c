#include <stdio.h>

int main(void){
    // ���� 3�� �Է�
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
 
    if (a+b==c) printf("+\n"); // a+b==c�̸� + ���
    if (a-b==c) printf("-\n"); // a-b==c�̸� - ���
    if (a*b==c) printf("*\n"); // a*b==c�̸� * ���
    if (a/b==c) printf("/\n"); // a/b==c�̸� / ���
    if (a+b!=c && a-b!=c && a*b!=c && a/b!=c) printf("Incorrect\n"); // ��Ģ���꿡 �ش���� ������ Incorrect ���

    return 0;
}