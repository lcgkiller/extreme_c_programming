#include <stdio.h>

int main(void){
    int num=10;
    int * pnum = &num;
    *pnum = 20;
    printf("%d", *pnum);
}