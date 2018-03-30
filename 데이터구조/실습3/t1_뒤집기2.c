#include <stdio.h>
#include <stdlib.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[100], reverse[100];
    int input_of_len, input_of_reverse; // �迭 ���� �Է�, ������ �迭 ���� �Է�
    int i;

    /* ���� X �迭 */
    scanf("%d", &input_of_len);

    for(i=0; i<input_of_len; i++){
        scanf("%d", &arr[i]);
    }

    /* ������ ���� */
    scanf("%d", &input_of_reverse);
    for(i=0; i<input_of_reverse*2; i++){
        scanf("%d", &reverse[i]);
    }

    for(i=0; i<input_of_reverse*2; i+=2){
        int start = reverse[i];
        int end = reverse[i+1];
        int mid = (start + end) / 2;
        int j;
        int k=0;
        for(j=start; j<=mid; j++){
            swap(&arr[start+k], &arr[end-k]);
            k++;
        }
        k=0;
    }
    for(i=0; i<input_of_len; i++){
        printf(" %d ", arr[i]);
    }

    return 0;

}