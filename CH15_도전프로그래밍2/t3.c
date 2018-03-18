#include <stdio.h>

int main(){
    int arr[10];
    int i;
    int start=0;
    int end=9;
    int input;

    printf("총 10개의 숫자 입력\n");
    
    for(i=0; i<10; i++){
        scanf("%d", &input);

        if (input % 2 == 0)
            arr[end--] = input;
        else    
            arr[start++] = input;
    }

    printf("배열 요소의 출력 : ");

    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}