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
    printf("합 : %lf, 평균 : %lf\n", sum, sum/5);
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
    printf("최소값 : %lf\n최소값 인덱스: %d\n최대값 : %lf\n최대값 인덱스 :%d\n", min, min_index, max, max_index);

}
int main(void){
    // P1(); // 실수 5개를 사용자에게서 입력받고 합과 평균 출력
    P5(); // 31p~32p 100이하의 실수 5개를 입력받은 후 최소값과 인덱스 출력
    return 0;
}
    