#include <stdio.h>

int main(void){
    char chr[100];
    int charLen=0;

    printf("���ڿ� �Է�!!!! : ");
    scanf("%s", chr);
    
    while(chr[charLen] != 0)
        charLen++;

    printf("���� : %d", charLen);
    return 0;
}