#include <stdio.h>

int main(void){
    int arr[5];
    int max, min, sum=0, i=0, j=1;
    int arrLen;
    arrLen = sizeof(arr) / sizeof(int);
    printf("5���� ���� �Է� : ");
    for(i=0; i<arrLen; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = arr[0];
    min = arr[0];
    
    for(j=1; j<arrLen; j++){
        if(max<arr[j])
            max = arr[j];
        if(min>arr[j])
            min = arr[j];
    }

    printf("�ִ� : %d\n�ּڰ� : %d\n�հ� : %d\n", max, min, sum);
    return 0;
}