#include <stdio.h>
void P3(){
    int arr[100];
    int i=0, j=0, n;

    while(1){
        scanf("%d", &n);
        if (n<0) break;
        if (n%2==0){
            arr[i] = n;
            i++;
        }
    }

    for(j=0; j<i; j++){
        printf("%3d", arr[j]);
    }
    // 거꾸로 출력
    printf("\n====거꾸로 출력====\n");
    for(j=i-1; j>=0; j--){
        printf("%3d", arr[j]);
    }
    printf("\n");
}

void P2(){
    int arr[100];
    int i=0, j=0, n;

    while(1){
        scanf("%d", &n);
        if (n<0) break;
        arr[i] = n;
        i++;
    }

    for(j=0; j<i; j++){
        printf("%3d", arr[j]);
    }
    // 거꾸로 출력
    printf("\n====거꾸로 출력====\n");
    for(j=i-1; j>=0; j--){
        printf("%3d", arr[j]);
    }
    printf("\n");
}

void P1(){
    int arr[5];
    int i=0;
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++){
        printf("%3d", arr[i]);
    }

    // 거꾸로 출력
    printf("\n====거꾸로 출력====\n");
    for(i=4; i>=0; i--){
        printf("%3d", arr[i]);
    }
    printf("\n");

}

void Prac_1(){
    int arr[7];
    int i=0;

    for(i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<7; i++){
        if(arr[i] >= 80){
            printf("%d %d\n", i, arr[i]);

        }
    }

}

void Prac_2(){
    int arr[9];
    int i=0;

    for(i=0; i<9; i++){
        arr[i] = 3 * (i+1);
    }
    
    for(i=0; i<9; i++){
        printf("%d\n", arr[i]);
    }
}
int P4(){
    int arr[5] = {0};
    int i=0;
    int sum = 0;
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("평균 : %lf\n", sum / 5.0);
}

void Prac_3(){
    int arr[10];
    int sum_even = 0;
    int sum_odd = 0;
    int i=0;

    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0){
            sum_even += arr[i];
        }
        else{
            sum_odd += arr[i];
        }
    }
    printf("짝수 합 : %d\n", sum_even);
    printf("홀수 합 : %d\n", sum_odd);
}
int main(void){
    // P1(); // 기본 배열 연습
    // P2(); // 음수가 들어올 때까지
    // P3(); // 짝수만 배열에 저장
    // Prac_1(); // 크기가 7인 배열 x에 점수 저장
    // Prac_2(); // 크기가 9인 배열 x, 구구단 3단의 계산값을 배열에 저장
    // P4(); // 평균 구하기
    Prac_3(); // 짝수는 짝수끼리, 홀수는 홀수끼리 더하기
}