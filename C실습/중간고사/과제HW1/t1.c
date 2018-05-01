#include <stdio.h>

int main(){
    char c;
    int result;
    int diff_ASCII = 'A' - 'a'; // 아스키코드 값 차이
    
    scanf("%c", &c); // 문자 입력

    // 대문자 범위 안에 있으면 그대로 출력, 그렇지 않으면 아스키코드 차이만큼을 더한 값 출력
    // 만약 아스키코드에서 대문자가 먼저인지, 소문자가 먼저인지 모른다는 것도 고려했습니다.
    result = (c>='A' && c<='Z') ? c : diff_ASCII >= 0 ? c - diff_ASCII : c + diff_ASCII;

    printf("%c\n", result);

    return 0;
}