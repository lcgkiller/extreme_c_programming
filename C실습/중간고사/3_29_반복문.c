#include <stdio.h>

int main(void){

    /* 6-17p do while */
    int count = 1;
    do {
        printf("do while �ݺ��� : %d\n", count);
        count ++;
    } while(count < 5);
    printf("do while �ݺ� Ƚ�� : %d\n", count - 1);

    return 0;

    /* 6-12p ������ ���� ���� */
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


    /* 6-12p WHILE ���� �̿��� min, max ���ϱ� */
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

    /* 6-11p 4�� */
    // int i;
    // int dan = 1;
    // scanf("%d", &i);

    // while(dan!=10){
    //     printf("%d * %d = %d\n", i, dan, i*dan);
    //     dan ++;
    // }

    // return 0;

    /* 6-11p 3�� : ��°��� �����ؾ� �Ѵ�. 100�� �Ѵ� ������ a�� ���ؾ� ��*/
    // int a = 1;
    // int sum = 0;

    // while(sum<=100){
    //     a++;
    //     sum += a;
    // }

    // printf("��� : %d", a);

    // return 0;

    /* 6-10p 2�� */
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

    /* 6-9p �ǽ� 3 : �ּҰ� ���ϱ� */
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

    // printf("�ּڰ��� %d\n", min);
    // return 0;

    /* 6-9p �ǽ� 2*/
    // int i =0, x=0;
    // while(i<10){
    //     printf("Hello World\n");
    //     ++i;
    // }

    /* 6-9p �ǽ� 1*/
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

    // printf("1���� 10������ �� : %d\n", sum);
    // return 0;
}