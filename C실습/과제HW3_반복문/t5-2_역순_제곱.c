#include <stdio.h>

int main(void){
 
    int num; // �Է°��� �����ϴ� ����
    int i;  // �ݺ��� ����
    int temp; // num�� �ӽ÷� �����ϴ� ����
    int cnt=1; // ���� �ڸ������� �����ϴ� ���� ex) 100�� �ڸ��� cnt=3, 10�� �ڸ��� cnt=2, 1�� �ڸ��� cnt=1
    int digit=1; // �ڸ����� ã���ֱ� ���� ���� ex) cnt=3 --> digit = 100 / cnt=2 --> digit = 10
    int result = 0; // ������� �����ϴ� ����

    scanf("%d", &num);

    temp = num;

    while(1){ 
        if(temp < 10) break; // temp < 10�� �Ǹ� while�� Ż��
        temp /= 10; 
        cnt ++; // 10���� ���������� �ڸ��� ����
    }

    for(i=1; i<cnt; i++){
        digit *= 10; // cnt =3 �̸� digit�� 100, cnt=2�̸� digit=10, cnt=1�̸� digit=1
    }

    while(num>0){
        temp = num % 10; // �������� �����ϴ� ����
        result += (temp*digit); // (������ * �ڸ���)�� result�� ����
        digit /= 10; // �ڸ����� �����ش�
        num /= 10; // num�� �����ش�.
    }
    printf("%d\n", result*result); // ������ ���
    return 0;
}