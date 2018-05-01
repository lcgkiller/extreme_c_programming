#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){
    int arr[100], reverse_arr[100];
    int n, num_of_reverse;
    int a, b;
    int i, j;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num_of_reverse);

    for(i=0; i<num_of_reverse; i++){
        scanf("%d %d", &a, &b);

        int k = a;

        for(j=b; j>=a; j--){ // �������� a<= b
            reverse_arr[j] = arr[k++]; // ������ ������ ������ �迭 ����
        }
        for(j=a; j<=b; j++){
            arr[j] = reverse_arr[j];
        }
    }
    
    for(i=0; i<n; i++){
        printf(" %d", arr[i]);
    }

}


/* ���� �� 

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

    // ���� ���� N �Է�
    scanf("%d", &input_of_len);

    // ���� X �迭 �Է�
    arr = (int * )malloc(sizeof(arr) * input_of_len);
    size_of_arr = _msize(arr) / sizeof(int);

    for(i=0; i<size_of_arr; i++){
        scanf("%d", &arr[i]);
    }

    // ������ ���� �Է�
    scanf("%d", &input_of_reverse); // ������ ����
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

*/