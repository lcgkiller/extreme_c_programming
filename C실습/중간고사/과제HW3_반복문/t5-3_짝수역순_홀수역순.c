#include <stdio.h>

int main(void){
 
    int num;                  // �Է°��� �����ϴ� ����
    int i;                    // �ݺ��� ����
    int temp;                 // num�� �ӽ÷� �����ϴ� ����
    int cnt_even=0;           // ¦���� ���� ����
    int cnt_odd=0;            // Ȧ���� ���� ����
    int digit_even=1;         // ¦�� �ڸ����� ã���ֱ� ���� ����
    int digit_odd=1;          // Ȧ�� �ڸ����� ã���ֱ� ���� ����
    int result_even = 0;      // ¦�� ���� ��°��� �����ϴ� ����
    int result_odd = 0;       // Ȧ�� ���� ��°��� �����ϴ� ����

    scanf("%d", &num);

    temp = num;

    while(1){ 
        if(temp % 10  % 2 == 0){ // �������� 2�� ������ �������� cnt_even ����
            cnt_even++;
        }
        else{                    // �������� 2�� ������ �������� ������ cnt_odd ����
            cnt_odd++;
        }
        if(temp < 10) break;     // temp < 10�� �Ǹ� while�� Ż��

        temp /= 10; 
    }

    for(i=1; i<cnt_even; i++){
        digit_even *= 10;       // ¦�� ������ŭ �ڸ���(digit)�� ����
    }
    for(i=1; i<cnt_odd; i++){
        digit_odd *= 10;        // Ȧ�� ������ŭ �ڸ���(digit)�� ����

    }

    while(num>0){
        temp = num % 10; // �������� �����ϴ� ����
        
        if (temp % 2 == 0){ // �ڸ����� ¦��
            result_even += (temp*digit_even); // ¦�� ������� ����
            digit_even /= 10; // �ڸ����� �����ش�
            num /= 10; // num�� �����ش�.
        }

        else{ // �ڸ����� Ȧ��
            result_odd += (temp*digit_odd); // Ȧ�� ������� ����
            digit_odd /= 10; // �ڸ����� �����ش�
            num /= 10; // num�� �����ش�.
        }
    }
    printf("%d %d\n", result_even, result_odd); // ¦�� ���� ���, Ȧ�� ���� ���
    return 0;
}