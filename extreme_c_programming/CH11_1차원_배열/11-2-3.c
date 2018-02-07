#include <stdio.h>

int main(void){
    char chr[100];
    int charLen=0;
    int maxChar=chr[0];
    int i;

    printf("문자열 입력!!!! : ");
    scanf("%s", chr);
    
    while(chr[charLen] != 0)
        charLen++;

    for(i=0; i<charLen; i++){
        if(maxChar < chr[i])
            maxChar = chr[i];
    }

    printf("%c", maxChar);
    return 0;
}