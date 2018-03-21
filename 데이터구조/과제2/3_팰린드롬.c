#include <stdio.h>
#include <string.h>

int isPalindrome(char * str, int len, int mid_of_len, int idx){
    if (str[idx] != str[len-1-idx])
        return 0; // 회문 아님

    if (idx == mid_of_len)
        return -1; // 회문

    return isPalindrome(str, len, mid_of_len, idx+1);
    
}

int main(void){

    char str[100];
    int result;
    int mid_of_len;

    fgets(str, sizeof(str), stdin);

    mid_of_len = (strlen(str) - 1) / 2;
    result = isPalindrome(str, strlen(str)-1, mid_of_len, 0);

    if (result==-1) printf("%d\nYes", strlen(str)-1);
    else printf("%d\nNo", strlen(str)-1);

    return 0;
}