#include <stdio.h>
void P1(){
    double x[5] = {0.0};
    int i=0;
    double sum=0;
    double avg;
    for(i=0; i<5; i++){
        scanf("%lf", &x[i]);
    }

    for(i=0; i<5; i++){
        sum += x[i];
    }
    printf("�� : %lf, ��� : %lf\n", sum, sum/5);
}

void P5(){
    int i=0;
    double x[5];
    double min, max;
    int min_index, max_index;
    for(i=0; i<5; i++){
        scanf("%lf", &x[i]);
    }
    min = x[0];
    min_index = 0;
    max_index = 0;

    for(i=1; i<5; i++){
        if(min > x[i]) min = x[i];
        if(max < x[i]) max = x[i];
    }

    for(i=0; i<5; i++){
        if(x[i] == min) {
            min_index = i;
        }
        if(x[i] == max){
            max_index = i;
        }
    }
    printf("�ּҰ� : %lf\n�ּҰ� �ε���: %d\n�ִ밪 : %lf\n�ִ밪 �ε��� :%d\n", min, min_index, max, max_index);

}
int main(void){
    // P1(); // �Ǽ� 5���� ����ڿ��Լ� �Է¹ް� �հ� ��� ���
    P5(); // 31p~32p 100������ �Ǽ� 5���� �Է¹��� �� �ּҰ��� �ε��� ���
    return 0;
}
    