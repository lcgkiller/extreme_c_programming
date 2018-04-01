#include <stdio.h>

// (492p) 공용체의 유용함은 다양한 접근 방식을 제공함에 있다.
// [1] int형 정수를 입력받고, 상위 2바이트와 하위 2바이트의 값을 양의 정수로 출력한다.
// [2] 상위 1바이트와 하위 1바이트에 저장된 값의 아스키 문자를 출력하는 예제

typedef struct dbshort{
    unsigned short upper;
    unsigned short lower;
}DBShort;

typedef union rdbuf{
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

int main(void){
    RDBuf buf;
    printf("정수 입력 : ");
    scanf("%d", &(buf.iBuf));

    printf("상위 2바이트 : %u \n", buf.sBuf.upper);
    printf("하위 2바이트 : %u \n", buf.sBuf.lower);
    printf("상위 1바이트 아스키 코드 : %c \n", buf.bBuf[0]);
    printf("하위 1바이트 아스키 코드 : %c \n", buf.bBuf[3]);

    return 0;
}