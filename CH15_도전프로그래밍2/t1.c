#include <stdio.h>

void even(int arr[10]){
    int i;
    printf("¦�� ��� : ");
    for(i=0; i<10; i++){
        if (arr[i] % 2 ==0){
            printf("%d ", arr[i]);
        }
    }
}
void odd(int arr[10]){
    int i;
    printf("Ȧ�� ��� : ");
    for(i=0; i<10; i++){
        if (arr[i] % 2 == 1){
            printf("%d ", arr[i]);
        }
    }
}
int main(){
    int arr[10];
    int i;

    printf("�� 10���� ���� �Է�\n");
    for(i=0; i<10; i++){
        printf("�Է� : ");
        scanf("%d", &arr[i]);
    }
    
    odd(arr);
    printf("\n");
    even(arr);

    return 0;
}