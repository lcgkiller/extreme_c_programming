#include <stdio.h>

int main(void){
    int num;
    int x[10];
    int e[10]; // ¦�� ����
    int o[10]; // Ȧ�� ����
    int i=0;

    int cnt1=0, cnt2=0; // ¦�� ī��Ʈ, Ȧ�� ī��Ʈ
    scanf("%d", &num);

    for(i=0; i<num; i++){ // �迭 �Է�
        scanf("%d", &x[i]);
    }

    for(i=0; i<num; i++){
        if (x[i] % 2 == 0){ // 2�� ������������
            e[cnt1] = x[i]; // ¦�� ���� �迭�� ����
            cnt1++;         // ¦�� ī��Ʈ ����
        }
        else{
            o[cnt2] = x[i]; // Ȧ�� ���� �迭�� ����
            cnt2++;         // Ȧ�� ī��Ʈ ����
        }
    }

    printf("Even:\n");
    if(cnt1==0) printf("none\n"); // cnt=0�̸� none ���
    for(i=0; i<cnt1; i++){  // ¦�� �迭 ���
        printf("%d\n", e[i]);
    }
    printf("Odd:\n");
    if(cnt2==0) printf("none\n"); // cnt=0�̸� none ���
    for(i=0; i<cnt2; i++){ // Ȧ�� �迭 ���
        printf("%d\n", o[i]);
    }
}