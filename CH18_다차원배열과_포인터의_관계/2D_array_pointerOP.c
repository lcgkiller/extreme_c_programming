#include <stdio.h>

int main(){
    int arr1[3][2];
    int arr2[2][3];

    /* arr1�� ���α��̸� �� ������. [2] * 4byte = 8byte�� ���� */
    printf("arr1 : %p \n", arr1);
    printf("arr1+1 : %p \n", arr1+1);
    printf("arr1+2 : %p \n\n", arr1+2);

    /* arr2�� ���α��̸� �� ������. [3] * 4byte = 12byte�� ���� */
    printf("arr2 : %p \n", arr2);
    printf("arr2+1 : %p \n", arr2+1);
    return 0;
}