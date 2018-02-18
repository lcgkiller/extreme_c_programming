#include <stdio.h>

int main(void){
    int num1=10, num2=20, num3=30;
    int * ptr1=&num1;
    int * ptr2=&num2;
    int * ptr3=&num3;

    printf("%d %d %d\n", ptr1, ptr2, ptr3);
    printf("%d %d %d\n", *ptr1, *ptr2, *ptr3);
    printf("%d %d %d\n", &ptr1, &ptr2, &ptr3);
    printf("------------------------------------------------------------\n");
    printf("%p %p %p\n", ptr1, ptr2, ptr3);
    printf("%p %p %p\n", *ptr1, *ptr2, *ptr3);
    printf("%p %p %p\n", &ptr1, &ptr2, &ptr3);
    printf("------------------------------------------------------------\n");
    
    printf("%p %p %p\n", num1, num2, num3);
}   