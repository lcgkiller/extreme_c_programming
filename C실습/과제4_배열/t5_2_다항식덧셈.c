#include <stdio.h>

int main(void){
    int k[5] = {0, }; // ��� ���� �迭
    int v[5] = {0, }; // ���� ���� �迭
    int m[5] = {0, };
    int n[5] = {0, };
    int result_k[10]; // ��� ��� ���� �迭
    int result_v[10]; // ��� ��� ���� �迭
    int num, num2;
    int i=0, j=0;
    int p=0, q=0; 
    int coef, expo; // ���, ����
    int cnt=0;

    scanf("%d", &num); // ���� �� �Է�

    for(i=0; i<num; i++){
        scanf("%d %d", &coef, &expo); // ���, ���� �Է�
        k[i] = coef; // ��� ����
        v[i] = expo; // ���� ����
    }

    scanf("%d", &num2);
    
    for(i=0; i<num2; i++){
        scanf("%d %d", &coef, &expo); // ���, ���� �Է�
        m[i] = coef; // ��� ����
        n[i] = expo; // ���� ����
    }
    while(p<num && q<num2){
        if (v[p] == n[q]){ // ����� ������ ����Ǵ� ����
            // printf("v[p] == n[q] : %d == %d\n", v[p], n[q]);
            if(k[p] + m[q] !=0 ){
                result_k[cnt] = k[p] + m[q]; // ������ ���� �� ����
                result_v[cnt] = v[p]; // ��� ����
            }   
            p++;
            q++;
        }
        else if(v[p] > n[q]){ // ����� v�� �� ũ�� ����Ǵ� ����
            // printf("v[p] > n[q] : %d > %d\n", v[p], n[q]);
            result_k[cnt] = k[p]; // ��� ����
            result_v[cnt] = v[p];
            p++;
        }
        else if(v[p] < n[q]){ // ����� n�� �� ũ�� ����Ǵ� ����
            // printf("v[p] < n[q] : %d < %d\n", v[p], n[q]);
            result_k[cnt] = m[q]; // ��� ����
            result_v[cnt] = n[q];
            q++;
        }
        cnt++;
    }
    // printf(" p : %d, q : %d\n", p, q);
    while(p<num){ // p�� num�� ������ ������
        result_k[cnt] = k[p]; // ��� ����
        result_v[cnt] = v[p]; // ���� ����
        cnt++;
        p++;            
    }

    while(q<num2){ // q��  num�� ������ ������
        result_k[cnt] = m[q]; // ��� ����
        result_v[cnt] = n[q]; // ���� ����
        cnt++;
        q++;
    }

    // printf("after p : %d, q : %d\n", p, q);
    for(i=0 ; i<cnt; i++){ // ���
        printf("( %d %d )", result_k[i], result_v[i]); 
    }
    return 0;
}