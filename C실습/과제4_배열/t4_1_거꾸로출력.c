#include <stdio.h>

int main(void){
    int n;
    int i;
    int arr[20]; // �迭 ����
    scanf("%d", &n);

    for(i=0; i<n; i++){ // ����ڷκ��� �迭�� �Է¹���
        scanf("%d", &arr[i]);
    }

    for(i=n-1; i>=0; i--){ // �Ųٷ� ����ϱ� ���ؼ� n-1���� 0���� ���
        printf(" %d", arr[i]);
    }

    return 0;
}