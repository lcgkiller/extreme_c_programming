#include <stdio.h>

int main(void){
    int num=10;
    int * pnum = &num;
    *pnum = 20;
    printf("*pnum : %d \n", *pnum);
    printf("num : %d \n", num);
    
}