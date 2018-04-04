#include <stdio.h>

int main(void){
    char c;
    scanf("%c", &c); // 문자 입력

    if (c>='a' && c<='z'){ // 소문자인 경우
        printf("%c\n", c+('A'-'a'));
    }
    else if (c>='A' && c<='Z'){ // 대문자인 경우
        printf("%c\n", c-('A'-'a'));
    }
    else{ // 그 이외의 문자인 경우
        printf("%c\n", c);
    }

    return 0;

}