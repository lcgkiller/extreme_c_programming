#include <stdio.h>

int main(void){
    int dan1, dan2; // �� ������ �����ϴ� ����
    int i, j, k;
    int cnt = 1;
    scanf("%d %d", &dan1, &dan2); // �� ���� �Է�

    for(i=dan1; i<=dan2; i+=2){         // dan1 ~ dan2 �������� 2�ܾ� ����ϱ� ���� ������ �ۼ�
        printf("%d\n", i);
        for(j=1; j<10; j++){            // *1, *2, *3, ... , *9
            for(k=i; k<=i+1; k++){      // 2�ܾ� ����ϱ� ���� ��ġ
                if (k > dan2){          // ���� dan2�� ������ �Ѿ������ ������� ����
                    break;
                }
                printf("%d*%d=%2d\t", k, j, k*j); // ������ ��¹�
            }
            printf("\n"); // ����
        }
        printf("\n"); // ����
    }
    return 0;
}