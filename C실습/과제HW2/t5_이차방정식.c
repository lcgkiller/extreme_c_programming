#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c; // 세 실수를 저장하는 변수
    double r1; // 더 작은 값을 저장하는 변수
    double r2; // 더 큰 값을 저장하는 변수

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a==0){ // a가 0이면 출력하는 결과값
        printf("%lf\n", -c/b);
    }
    else{
        if(b*b-4.0*a*c > 0){ // 두 실근을 출력
            r1 = ((-b - sqrt(b*b-4.0*a*c)) / (2.0*a)); // 서로 다른 두 근중 작은 실근을 저장
            r2 = ((-b + sqrt(b*b-4.0*a*c)) / (2.0*a)); // 서로 다른 두 근중 큰 실근을 저장
            printf("%lf %lf", r1, r2); 
        }
        else{
            if(b*b-4.0*a*c == 0){ // b^2-4ac = 0이면 한 개의 근 출력
                printf("%lf\n", (-b)/(2.0*a));
            }
            else{ // 근이 없는 경우
                printf("none\n");
            }
        }
    }
    return 0;
}