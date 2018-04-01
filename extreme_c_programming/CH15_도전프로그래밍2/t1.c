#include <stdio.h>

void even(int arr[10]){
    int i;
    printf("짝수 출력 : ");
    for(i=0; i<10; i++){
        if (arr[i] % 2 ==0){
            printf("%d ", arr[i]);
        }
    }
}
void odd(int arr[10]){
    int i;
    printf("홀수 출력 : ");
    for(i=0; i<10; i++){
        if (arr[i] % 2 == 1){
            printf("%d ", arr[i]);
        }
    }
}
int main(){
    int arr[10];
    int i;

    printf("총 10개의 숫자 입력\n");
    for(i=0; i<10; i++){
        printf("입력 : ");
        scanf("%d", &arr[i]);
    }
    
    odd(arr);
    printf("\n");
    even(arr);

    return 0;
}