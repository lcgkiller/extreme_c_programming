#include <stdio.h>

int main(void)
{
    int m, n; // ���� ���� m, n
    int i, j; // �ݺ��� ����

    int result;

    scanf("%d %d", &m, &n);
    
    if (m<=n){
        for (i=m; i<=n; i++){
            int cnt = 0; // ����� ������ ¦������ �˻��ϱ� ���� ����
            for (j=1; j<=i; j++){
                if (i%j==0) { // 1���� i���� ��� ���� �˻�
                    cnt+=1; // ����� ���� ����
                }
            }
            if (cnt % 2 == 0) // ����� ������ ¦���̸�
                result+=1; // ��������� �ϳ� ������Ų��.
            cnt = 0; // cnt �ʱ�ȭ
        }
    }

    else if(n<=m){
        for (i=n; i<=m; i++){
            int cnt = 0; // ����� ������ ¦������ �˻��ϱ� ���� ����
            for (j=1; j<=i; j++){ // m�� ��� ������ �˻��ϱ� ���� �ݺ���
                if (i%j==0) cnt+=1;
            }
            if (cnt % 2 == 0) // ����� ������ ¦���̸�
                result+=1; // ��������� �ϳ� ������Ų��.
            cnt = 0; // cnt �ʱ�ȭ
        }
    }

    printf("%d", result);
    return 0;
} 