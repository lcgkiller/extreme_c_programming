#include <stdio.h>

int main(void){
    char str1[] = "My String";
    char * str2 = "Your String";
    printf("%s %s \n", str1, str2);

    str2 = "Our String";
    printf("���ڿ� : %s %s \n", str1, str2);
    printf("�޸� �ּ� %p %p\n", str1, str2);

    // str1[0]='X';
    // str2[0]='X';
    printf("%s %s \n", str1, str2); // str2�� X�� �ٲ� ��µ��� ����. str2�� ��� ������ ���ڿ��̱� ����.

    return 0;
}