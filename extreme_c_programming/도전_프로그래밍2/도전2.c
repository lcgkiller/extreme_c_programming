#include <stdio.h>

int main(void){
    int input, check;
    int i = 0;
    int arr[20];
    int count = 0;
    int arrLen;

    printf("10진수 정수 입력");
    scanf("%d", &input);
    
    check = input;
    while(check!=1){
        check = (int) check / 2;
        count++;
    }

    for(i=0; i<count; i++){
        arr[i] = input % 2;
        input = (int)input/2;
        if(input==1)
            arr[i+1] = 1;
        
    }

    for(i=count; i>=0; i--){
        printf("%d", arr[i]);
    }

    return 0;
}