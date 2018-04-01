#include <stdio.h>

int main(){
    int arr1[3][2];
    int arr2[2][3];

    /* arr1의 세로길이를 잘 보도록. [2] * 4byte = 8byte씩 증가 */
    printf("arr1 : %p \n", arr1);
    printf("arr1+1 : %p \n", arr1+1);
    printf("arr1+2 : %p \n\n", arr1+2);

    /* arr2의 세로길이를 잘 보도록. [3] * 4byte = 12byte씩 증가 */
    printf("arr2 : %p \n", arr2);
    printf("arr2+1 : %p \n", arr2+1);
    return 0;
}