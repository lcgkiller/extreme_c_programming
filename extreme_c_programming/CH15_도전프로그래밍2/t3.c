#include <stdio.h>

int main(){
    int arr[10];
    int i;
    int start=0;
    int end=9;
    int input;

    printf("�� 10���� ���� �Է�\n");
    
    for(i=0; i<10; i++){
        scanf("%d", &input);

        if (input % 2 == 0)
            arr[end--] = input;
        else    
            arr[start++] = input;
    }

    printf("�迭 ����� ��� : ");

    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}