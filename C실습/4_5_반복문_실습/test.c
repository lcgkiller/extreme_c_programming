#include <stdio.h>
#include <stdlib.h>

 

int sum_calc(int n)
{
    int result = 0;
    for (; n > 0;) {
        result += n % 10;
        n /= 10;
    }
    return result;
}

 

int main(void)
{
    int input;
    int sum;

 

    for (;;) {
        printf("숫자를 입력하세요(0이면 끝:"); 
        scanf("%d", &input);
        if (input == 0) break;
        sum = input;
        for (; sum >= 10;) {
            sum = sum_calc(sum);
        }
        printf("sum = %d\n", sum);
    }

    system("pause");
    return 0;
}
[출처] 디지털근.. (C언어를 배우자) |작성자 에이스

