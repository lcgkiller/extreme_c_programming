#include <stdio.h>

int main(void){

    /* 6-17p do while */
    int count = 1;
    do {
        printf("do while 반복문 : %d\n", count);
        count ++;
    } while(count < 5);
    printf("do while 반복 횟수 : %d\n", count - 1);

    return 0;

    /* 6-12p 교수님 개인 문제 */
    // int n;
    // double avg;
    // int sum = 0;
    // int num_of_input = 0;

    // scanf("%d", &n);

    // while(n>=0){
    //     sum += n;
    //     num_of_input ++;
    //     scanf("%d", &n);
    // }

    // printf("sum : %d, avg : %.3lf \n", sum, (double)sum/(num_of_input));

    // return 0;


    /* 6-12p WHILE 문을 이용한 min, max 구하기 */
    // int min, max, n;

    // scanf("%d", &n);

    // min = max = n;

    // while(n!=0){
    //     if (max < n) max = n;
    //     if (min > n) min = n;
    //     scanf("%d", &n);
        
    // }

    // printf("max : %d, min : %d\n", max, min);

    // return 0;

    /* 6-11p 4번 */
    // int i;
    // int dan = 1;
    // scanf("%d", &i);

    // while(dan!=10){
    //     printf("%d * %d = %d\n", i, dan, i*dan);
    //     dan ++;
    // }

    // return 0;

    /* 6-11p 3번 : 출력값에 주의해야 한다. 100이 넘는 순간의 a를 구해야 함*/
    // int a = 1;
    // int sum = 0;

    // while(sum<=100){
    //     a++;
    //     sum += a;
    // }

    // printf("출력 : %d", a);

    // return 0;

    /* 6-10p 2번 */
    // char A='A';
    // char a='a';

    // while(A!=90){
    //     printf("%c", A++);
    // }
    // printf("\n");
    
    // while(a!=122){
    //     printf("%c", a++);
    // }
    // printf("\n");
    
    // return 0;

    /* 6-9p 실습 3 : 최소값 구하기 */
    // int num;
    // int min;

    // scanf("%d", &num);
    // min = num;
    // while(num>=0){
    //     if (min > num){
    //         min = num;
    //     }
    //     scanf("%d", &num);
    // }

    // printf("최솟값은 %d\n", min);
    // return 0;

    /* 6-9p 실습 2*/
    // int i =0, x=0;
    // while(i<10){
    //     printf("Hello World\n");
    //     ++i;
    // }

    /* 6-9p 실습 1*/
    // int i =0;
    // while(i<10){
    //     printf("Hello World\n");
    //     ++i;
    // }

    /* 6-7p */
    // int i, sum;
    // i = 1;
    // sum = 0;
    // while(i<=10){
    //     sum += i;
    //     i++;
    // }

    // printf("1부터 10까지의 합 : %d\n", sum);
    // return 0;
}