#include <stdio.h>

int main(){
    char c;
    int result;
    int diff_ASCII = 'A' - 'a'; // �ƽ�Ű�ڵ� �� ����
    
    scanf("%c", &c); // ���� �Է�

    // �빮�� ���� �ȿ� ������ �״�� ���, �׷��� ������ �ƽ�Ű�ڵ� ���̸�ŭ�� ���� �� ���
    // ���� �ƽ�Ű�ڵ忡�� �빮�ڰ� ��������, �ҹ��ڰ� �������� �𸥴ٴ� �͵� ����߽��ϴ�.
    result = (c>='A' && c<='Z') ? c : diff_ASCII >= 0 ? c - diff_ASCII : c + diff_ASCII;

    printf("%c\n", result);

    return 0;
}