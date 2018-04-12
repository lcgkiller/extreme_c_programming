#include <stdio.h>

int main(void){
 
    int num;                  // 입력값을 저장하는 변수
    int i;                    // 반복문 변수
    int temp;                 // num을 임시로 저장하는 변수
    int cnt_even=0;           // 짝수의 개수 저장
    int cnt_odd=0;            // 홀수의 개수 저장
    int digit_even=1;         // 짝수 자릿값을 찾아주기 위한 변수
    int digit_odd=1;          // 홀수 자릿값을 찾아주기 위한 변수
    int result_even = 0;      // 짝수 역순 출력값을 저장하는 변수
    int result_odd = 0;       // 홀수 역순 출력값을 저장하는 변수

    scanf("%d", &num);

    temp = num;

    while(1){ 
        if(temp % 10  % 2 == 0){ // 나머지가 2로 나누어 떨어지면 cnt_even 증가
            cnt_even++;
        }
        else{                    // 나머지가 2로 나누어 떨어지지 않으면 cnt_odd 증가
            cnt_odd++;
        }
        if(temp < 10) break;     // temp < 10이 되면 while문 탈출

        temp /= 10; 
    }

    for(i=1; i<cnt_even; i++){
        digit_even *= 10;       // 짝수 개수만큼 자릿수(digit)을 지정
    }
    for(i=1; i<cnt_odd; i++){
        digit_odd *= 10;        // 홀수 개수만큼 자릿수(digit)을 지정

    }

    while(num>0){
        temp = num % 10; // 나머지를 저장하는 변수
        
        if (temp % 2 == 0){ // 자리수가 짝수
            result_even += (temp*digit_even); // 짝수 결과값에 저장
            digit_even /= 10; // 자릿수를 나눠준다
            num /= 10; // num을 나눠준다.
        }

        else{ // 자리수가 홀수
            result_odd += (temp*digit_odd); // 홀수 결과값에 저장
            digit_odd /= 10; // 자릿수를 나눠준다
            num /= 10; // num을 나눠준다.
        }
    }
    printf("%d %d\n", result_even, result_odd); // 짝수 역순 출력, 홀수 역순 출력
    return 0;
}