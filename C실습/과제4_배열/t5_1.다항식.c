#include <stdio.h>

int main(void){
    int k[10]; // ��� ���� �迭
    int v[10]; // ���� ���� �迭
    int num;
    int coef, expo; // ���, ����
    int i;

    scanf("%d", &num); // ���� �� �Է�

    for(i=0; i<num; i++){
        scanf("%d %d", &coef, &expo); // ���, ���� �Է�
        k[i] = coef; // ��� ����
        v[i] = expo; // ���� ����
    }

    for(i=0 ; i<num; i++){ // ���
        printf("( %d %d )", k[i], v[i]); 
    }
    return 0;
}