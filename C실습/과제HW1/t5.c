#include <stdio.h>

int main(void){
    // int input;
    int result = 0;
    int a, b, c, A, B, C;
    int i=0;
    // scanf("%d", &input);

    for (i=100; i<1000; i++){
        a = (i / 100 % 2) == 0 ? 1 : 0;         // ������ �������� 100�� �ڸ����� ��
        b = ((i / 10) % 10 % 2) == 0 ? 1 : 0;   // ������ �������� 10�� �ڸ����� ��
        c = (i % 10 % 2) == 0 ? 1: 0;           // ������ �������� 1�� �ڸ����� ��

        A = i / 100 % 10;   // 100�� �ڸ��� ������
        B = i / 10 % 10;    // 10�� �ڸ��� ������
        C = i % 10;         // 1�� �ڸ��� ������

        /* 
        if a?
            if b?
                if c?
                    return A+B+C;
                else
                    return A+B;
            else
                return A;
        
        else if b?
            if c?
                return B+C;
            else
                return B;

        else if c?
            return C;
        
        else
            return 0
        */

        // �Ʒ� ������ �� if���� �ű� �Ͱ� �����ϴ�.
        result = a ? (b ? (c ? A+B+C : A+B) : c ? A+C : A) : (b ? (c ? B+C : B) : c ? C : 0);
        printf("i�� : %d : %d\n", i, result);
        
    }
    return 0;
}

