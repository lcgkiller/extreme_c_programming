#include <stdio.h>

int main(void){
    char chr[100];
    int charLen=0;

    printf("문자열 입력!!!! : ");
    scanf("%s", chr);
    
    while(chr[charLen] != 0)
        charLen++;

    printf("길이 : %d", charLen);
    return 0;
}