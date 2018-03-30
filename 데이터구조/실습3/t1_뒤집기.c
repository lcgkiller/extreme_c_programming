#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int * arr, * reverse;
    int input_of_len, input_of_reverse; // �迭 ���� �Է�, ������ �迭 ���� �Է�
    int size_of_arr, size_of_reverse;  // �迭 ũ��, ������ �迭 ũ��
    int i;

    /* ���� X �迭 */
    scanf("%d", &input_of_len);
    arr = (int * )malloc(sizeof(arr) * input_of_len);
    size_of_arr = _msize(arr) / sizeof(int);

    for(i=0; i<size_of_arr; i++){
        scanf("%d", &arr[i]);
    }

    /* ������ ���� */
    scanf("%d", &input_of_reverse);
    reverse = (int *)malloc(sizeof(reverse) * input_of_reverse * 2);
    size_of_reverse = _msize(reverse) / sizeof(int);

    for(i=0; i<size_of_reverse; i++){
        scanf("%d", &reverse[i]);
    }

    for(i=0; i<size_of_reverse; i+=2){
        int start = reverse[i];
        int end = reverse[i+1];
        int mid = (start + end) / 2;
        int j;
        int k=0;
        printf("start : %d, end : %d, mid : %d\n", start, end, mid);

        for(j=start; j<mid; j++){
            swap(&arr[start+k], &arr[end-k]);
            k++;
        }
    }

    for(i=0; i<size_of_arr; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    free(reverse);

    return 0;

}