#include <stdio.h>

void even(int arr[], int len){
    int i =0;
    printf("¦�� ��� : ");
    for(i=0; i<len; i++){
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void odd(int arr[], int len){
    int i =0;
    printf("Ȧ�� ��� : ");
    for(i=0; i<len; i++){
        if (arr[i] % 2 == 1)
            printf("%d ", arr[i]);
    }
    printf("\n");
}


int main(void){
    int i;
    int arr[10];
    int lenArr;
    for(i=0; i<10; i++){
        printf("�Է� : ");
        scanf("%d", &arr[i]);
    }

    lenArr = sizeof(arr)/sizeof(int);

    odd(arr, lenArr);
    even(arr, lenArr);

    return 0;
}