#include <stdio.h>

int main(void){
    // int input;
    int result = 0;
    int a, b, c, A, B, C;
    int i=0;
    // scanf("%d", &input);

    for (i=100; i<1000; i++){
        a = (i / 100 % 2) == 0 ? 1 : 0;         // 나누어 떨어지면 100의 자리수는 참
        b = ((i / 10) % 10 % 2) == 0 ? 1 : 0;   // 나누어 떨어지면 10의 자리수는 참
        c = (i % 10 % 2) == 0 ? 1: 0;           // 나누어 떨어지면 1의 자리수는 참

        A = i / 100 % 10;   // 100의 자리수 나머지
        B = i / 10 % 10;    // 10의 자리수 나머지
        C = i % 10;         // 1의 자리수 나머지

        /* 
        if a?
            if b?
                if c?
                    return A+B+C;
                else
                    return A+B;
            else
                return A;
        
        else if b?
            if c?
                return B+C;
            else
                return B;

        else if c?
            return C;
        
        else
            return 0
        */

        // 아래 문장은 위 if문을 옮긴 것과 같습니다.
        result = a ? (b ? (c ? A+B+C : A+B) : c ? A+C : A) : (b ? (c ? B+C : B) : c ? C : 0);
        printf("i값 : %d : %d\n", i, result);
        
    }
    return 0;
}

