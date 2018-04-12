#include <stdio.h>

int main(void){
 
    int num; // 입력값을 저장하는 변수
    int i;  // 반복문 변수
    int temp; // num을 임시로 저장하는 변수
    int cnt=1; // 몇의 자리수인지 저장하는 변수 ex) 100의 자리수 cnt=3, 10의 자리수 cnt=2, 1의 자리수 cnt=1
    int digit=1; // 자릿값을 찾아주기 위한 변수 ex) cnt=3 --> digit = 100 / cnt=2 --> digit = 10
    int result = 0; // 결과값을 저장하는 변수

    scanf("%d", &num);

    temp = num;

    while(1){ 
        if(temp < 10) break; // temp < 10이 되면 while문 탈출
        temp /= 10; 
        cnt ++; // 10으로 나누어지면 자릿수 증가
    }

    for(i=1; i<cnt; i++){
        digit *= 10; // cnt =3 이면 digit은 100, cnt=2이면 digit=10, cnt=1이면 digit=1
    }

    while(num>0){
        temp = num % 10; // 나머지를 저장하는 변수
        result += (temp*digit); // (나머지 * 자릿수)를 result에 증가
        digit /= 10; // 자릿수를 나눠준다
        num /= 10; // num을 나눠준다.
    }
    printf("%d\n", result*result); // 제곱수 출력
    return 0;
}