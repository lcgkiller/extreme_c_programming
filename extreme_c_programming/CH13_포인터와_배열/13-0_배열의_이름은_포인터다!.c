#include <stdio.h>

int main(void){

    int num = 10;
    int * pnum = &num;

    int arr[3]={1,2,3};
    int * parr = &arr;
    printf("�迭�� �̸�(arr) : %p \n", arr);
    printf("�迭�� ù ��° element : %p \n", &arr[0]);
    printf("�迭�� �� ��° element : %p \n", &arr[1]);
    printf("�迭�� �� ��° element : %p \n", &arr[2]);

    *pnum = 10000;
    *parr = 99999;
    printf("�������� �� �����ϱ� : %d\n", num);
    printf("�迭�� �̸��� ������ �� ����. %d \n", arr);
}