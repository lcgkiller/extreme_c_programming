#include <stdio.h>

int main(void){
    int num = 5;
    int *ptr = &num;
    printf("%d, %d \n", num, ptr);
    printf("%d, %d \n", num, *ptr);
    printf("%p, %p \n", num, *ptr);
    return 0;
}