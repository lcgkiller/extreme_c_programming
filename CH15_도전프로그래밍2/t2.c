#include <stdio.h>

int main(){
    int input;
    int i=0;
    int arr[20];
    int result;
    int count = 0;

    printf("10진수 정수 입력 : ");
    scanf("%d", &input);

    result = input;

    for(i=0; i<20; i++){
        arr[i] = result % 2;
        if (result == 1)
            break;
        count += 1;
        result = result / 2;
    }

    for(i=count; i>=0; i--){
        printf("%d", arr[i]);
    }
    return 0;
}