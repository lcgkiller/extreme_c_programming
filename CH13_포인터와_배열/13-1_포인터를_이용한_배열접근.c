#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int * ptr = arr;
    int i;

    for(i=0; i<3; i++){
        printf("%d\n", arr[i]);
        
    }

    /* 포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을 기반으로 +2씩 하기 */
    for(i=0; i<3; i++){
        * ptr += 2;
        ptr ++;
    }

    for(i=0; i<3; i++){
        printf("%d\n", arr[i]);
    }

    /* 포인터 변수 ptr에 저장된 값을 변경시키지 않고, ptr을 대상으로 덧셈연산을 하여, 그 결과로 반환되는 주소 값을 통해서 +2씩 하기 */
    
    for(i=0; i<3; i++){
        printf("여기서 찍어보는 ptr값은 엉뚱한 값을 가리킴: %x\n", ptr+i);
        *(ptr+i) += 2;

    }

    for(i=0; i<3; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

