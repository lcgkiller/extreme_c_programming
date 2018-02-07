#include <stdio.h>

int main(void){
    char chr[]={'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    int chrLen = sizeof(chr) / sizeof(char);
    int i=0;
    for(i=0; i<chrLen; i++)
        printf("%c", chr[i]);
    return 0;
}