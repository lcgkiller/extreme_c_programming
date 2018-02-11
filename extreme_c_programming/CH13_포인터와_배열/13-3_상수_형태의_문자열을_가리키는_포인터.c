#include <stdio.h>

int main(void){
    char str1[] = "My String";
    char * str2 = "Your String";
    printf("%s %s \n", str1, str2);

    str2 = "Our String";
    printf("문자열 : %s %s \n", str1, str2);
    printf("메모리 주소 %p %p\n", str1, str2);

    // str1[0]='X';
    // str2[0]='X';
    printf("%s %s \n", str1, str2); // str2는 X로 바뀌어서 출력되지 않음. str2는 상수 형태의 문자열이기 때문.

    return 0;
}