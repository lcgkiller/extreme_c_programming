#include <stdio.h>
#include <string.h>

void Palindrome(char * str, int len){
    int i=0;

    for(i=0; i<len/2; i++){
        if (str[i] != str[len-1-i]){
            printf("회문이 아닙니다.\n");
            break;
        }
        else{
            printf("회문 입니다.\n");
            break;
        }
    }
}

int main(){
    char str[100];
    int len = 0;
    int i;

    printf("문자열 입력 : ");
    scanf("%s", str);

    len = strlen(str);
    Palindrome(str, len);

    return 0;

}