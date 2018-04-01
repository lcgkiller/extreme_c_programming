#include <stdio.h>

typedef struct sbox{ // 구조체
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef union ubox{ // 공용체
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(void){
    SBox sbox;
    UBox ubox;

    printf("%p %p %p \n", &sbox.mem1, &sbox.mem2, &sbox.mem3);

    // 공용체를 구성하는 멤버는 각각 할당되지 않음
    // 대신, 크기가 가장 큰 멤버의 변수(여기선 double)만 할당되어 이를 공유한다.
    printf("%p %p %p \n", &ubox.mem1, &ubox.mem2, &ubox.mem3); 
    printf("%d %d \n", sizeof(SBox), sizeof(UBox));
    
    return 0;
}