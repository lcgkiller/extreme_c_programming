#include <stdio.h>

int main(void){
    int k[5] = {0, }; // 계수 저장 배열
    int v[5] = {0, }; // 지수 저장 배열
    int m[5] = {0, };
    int n[5] = {0, };
    int result_k[10]; // 결과 계수 저장 배열
    int result_v[10]; // 결과 계수 저장 배열
    int num, num2;
    int i=0, j=0;
    int p=0, q=0; 
    int coef, expo; // 계수, 지수
    int cnt=0;

    scanf("%d", &num); // 항의 수 입력

    for(i=0; i<num; i++){
        scanf("%d %d", &coef, &expo); // 계수, 지수 입력
        k[i] = coef; // 계수 저장
        v[i] = expo; // 지수 저장
    }

    scanf("%d", &num2);
    
    for(i=0; i<num2; i++){
        scanf("%d %d", &coef, &expo); // 계수, 지수 입력
        m[i] = coef; // 계수 저장
        n[i] = expo; // 지수 저장
    }
    while(p<num && q<num2){
        if (v[p] == n[q]){ // 계수가 같으면 실행되는 로직
            // printf("v[p] == n[q] : %d == %d\n", v[p], n[q]);
            if(k[p] + m[q] !=0 ){
                result_k[cnt] = k[p] + m[q]; // 지수를 더한 값 저장
                result_v[cnt] = v[p]; // 계수 저장
            }   
            p++;
            q++;
        }
        else if(v[p] > n[q]){ // 계수가 v가 더 크면 실행되는 로직
            // printf("v[p] > n[q] : %d > %d\n", v[p], n[q]);
            result_k[cnt] = k[p]; // 계수 저장
            result_v[cnt] = v[p];
            p++;
        }
        else if(v[p] < n[q]){ // 계수가 n이 더 크면 실행되는 로직
            // printf("v[p] < n[q] : %d < %d\n", v[p], n[q]);
            result_k[cnt] = m[q]; // 계수 저장
            result_v[cnt] = n[q];
            q++;
        }
        cnt++;
    }
    // printf(" p : %d, q : %d\n", p, q);
    while(p<num){ // p가 num에 도달할 때까지
        result_k[cnt] = k[p]; // 계수 저장
        result_v[cnt] = v[p]; // 지수 저장
        cnt++;
        p++;            
    }

    while(q<num2){ // q가  num에 도착할 때까지
        result_k[cnt] = m[q]; // 계수 저장
        result_v[cnt] = n[q]; // 지수 저장
        cnt++;
        q++;
    }

    // printf("after p : %d, q : %d\n", p, q);
    for(i=0 ; i<cnt; i++){ // 출력
        printf("( %d %d )", result_k[i], result_v[i]); 
    }
    return 0;
}