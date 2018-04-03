#include <stdio.h>

int main(void){
    char c;
    scanf("%c", &c);
    if (c>='a' && c<='z'){
        c += 'A'-'a';
        printf("%c", c);
    }
    else if (c>='A' && c<='Z'){
        c -= 'A'-'a';
        printf("%c", c);
    }
    else{
        printf("none");
    }
    
    return 0;
}