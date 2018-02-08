#include <stdio.h>
int main(void){
    int count = 0; // 소수 출력 갯수
    int primeNum = 2;
    int i;
    int check = 0;

    while(count!=10){   // 소수가 10개가 출력되면 종료한다.
        for(i=(int)primeNum/2; i>=1; i--){ // i는 주어진 primeNum의 1/2에서 시작한다.
            if (primeNum%i==0){
                check++;
            }
            if (check>=2){
                break;
            }
        }
        if (check==1){
            printf("%d \n", primeNum);
            count += 1;        
        }
        check = 0; 
        primeNum++;
        
    }
    return 0;       
}