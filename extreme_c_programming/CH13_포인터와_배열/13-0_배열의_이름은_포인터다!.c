#include <stdio.h>

int main(void){

    int num = 10;
    int * pnum = &num;

    int arr[3]={1,2,3};
    int * parr = &arr;
    printf("배열의 이름(arr) : %p \n", arr);
    printf("배열의 첫 번째 element : %p \n", &arr[0]);
    printf("배열의 두 번째 element : %p \n", &arr[1]);
    printf("배열의 세 번째 element : %p \n", &arr[2]);

    *pnum = 10000;
    *parr = 99999;
    printf("포인터의 값 변경하기 : %d\n", num);
    printf("배열의 이름은 변경할 수 없다. %d \n", arr);
}