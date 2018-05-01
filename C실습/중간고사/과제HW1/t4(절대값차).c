#include <stdio.h>

int main(void){
    int i;
    int reverse; // 4�ڸ� ����� ������ ���� �����ϴ� ����
    int result;  
    scanf("%d", &i);

    // 1�� �ڸ� -> 1000�� �ڸ�,  10�� �ڸ� -> 100�� �ڸ�,  100�� �ڸ� -> 10�� �ڸ�,  1000�� �ڸ� -> 1�� �ڸ�
    reverse = ( i % 10 * 1000) + ( i / 10 % 10 * 100 ) + ( i / 100 % 10 * 10 ) + ( i / 1000 % 10 * 1);

    // input���� �� ũ�� �״�� ���, �ƴ϶�� *(-1)���·� ���
    result = ( i > reverse ) ? (i-reverse) : (i-reverse) * (-1);

    printf("%d\n", result);

    return 0;
}