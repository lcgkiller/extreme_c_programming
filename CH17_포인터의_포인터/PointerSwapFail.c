#include <stdio.h>

/* PointerSwapSuccess */
void SwapIntPtr(int ** dp1, int ** dp2){
    int * temp = * dp1;
    *dp1 = *dp2;
    *dp2 = temp;
}
int main(){
    int num1=10, num2=20;
    int * ptr1, * ptr2;
    ptr1=&num1, ptr2=&num2;
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    SwapIntPtr(&ptr1, &ptr2); 

    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    return 0;
}

/* PointerSwap Fail
void SwapIntPtr(int * p1, int * p2){
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}
int main(){
    int num1=10, num2=20;
    int * ptr1, * ptr2;
    ptr1=&num1, ptr2=&num2;
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    SwapIntPtr(ptr1, ptr2); // 함수가 실행되면 p1, p2값은 서로 바뀌지만, ptr1과 ptr2와는 별개의 변수다.

    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    return 0;
}
*/

/* 차이 비교할 것 
void SwapIntPtr(int * ptr1, int * ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int num1=10, num2=20;
    int * ptr1, * ptr2;
    ptr1=&num1, ptr2=&num2;
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    SwapIntPtr(&num1, &num2);

    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    return 0;
}
*/