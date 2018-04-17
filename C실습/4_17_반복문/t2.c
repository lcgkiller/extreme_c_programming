#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void Print(int num){
    if (num==0){
        return ;
    }
    else{
        Print(num/10);
        printf("%d", num % 10);
    }
}

void reversePrint(int num){
    if (num==0){
        return ;
    }
    else{
        printf("%d", num % 10);
        reversePrint(num/10);
    }
}
int main(void){

    int num;
    scanf("%d", &num);

    Print(num);
    printf("\n");
    reversePrint(num);

}