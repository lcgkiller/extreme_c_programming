#include <stdio.h>

int main(void){
    /* 6장 반복문 실습12(30p) */
    // int i;
    // int sum1=0, sum2=0;
    // for(i=1; i<=10; i++){
    //     if (i%2==0) sum1 += i;
    //     else sum2 += i;
    // }
    // printf("짝수의 합 : %d\n홀수의 합 : %d\n", sum2, sum1);
    // return 0;

    /* 6장 반복문 실습13(30p) 달력출력 문제 */
    // int num;
    // int i;
    // scanf("%d", &num);

    // for(i=1; i<num-1; i++){
    //     printf("    ", i);
    // }
    // for(i=1; i<=31; i++){
    //     printf("%3d", i);
    //     if((num-1+i)%7 ==  0) printf("\n");
    // }
    // return 0;
    
    /* 6장 반복문 실습14(33p) 중첩반복문 문제 */

    int num;
    int i,j ;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(j=0; j<=i; j++)
            printf("*");
        for(j=1; j<num-i; j++)
            printf("~");

        printf("\n");
    }
    return 0;
    
}