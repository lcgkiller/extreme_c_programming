#include <stdio.h>

int main(void){
    /* 6�� �ݺ��� �ǽ�12(30p) */
    // int i;
    // int sum1=0, sum2=0;
    // for(i=1; i<=10; i++){
    //     if (i%2==0) sum1 += i;
    //     else sum2 += i;
    // }
    // printf("¦���� �� : %d\nȦ���� �� : %d\n", sum2, sum1);
    // return 0;

    /* 6�� �ݺ��� �ǽ�13(30p) �޷���� ���� */
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
    
    /* 6�� �ݺ��� �ǽ�14(33p) ��ø�ݺ��� ���� */

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