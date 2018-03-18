#include <stdio.h>

int main(void){
    int * arr1[5];
    int * arr2[3][5];

    int ** ptr1 = arr1;
    int *(*ptr2)[5] = arr2;

    printf("%d %d\n", arr1, arr2);
    printf("%d %d\n", ptr1, ptr2);

    return 0;
}