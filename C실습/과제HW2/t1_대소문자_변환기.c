#include <stdio.h>

int main(void){
    char c;
    scanf("%c", &c); // ���� �Է�

    if (c>='a' && c<='z'){ // �ҹ����� ���
        printf("%c\n", c+('A'-'a'));
    }
    else if (c>='A' && c<='Z'){ // �빮���� ���
        printf("%c\n", c-('A'-'a'));
    }
    else{ // �� �̿��� ������ ���
        printf("%c\n", c);
    }

    return 0;

}