#include <stdio.h>
#include <stdlib.h>
void Swap(int * arr, int * origin_arr, int * change_info, int change_input){
    /*
    arr : ���� �迭 [3, 81, 9, 12, 0, -9, 36, 33, 91, 10]
    origin_arr : �ٲٷ��� �ϴ� ��ġ�� arr��
    change_info : ��ġ ���� [3, 8, 0, 9, 3]
    change_input : ��ġ ���� ����
    */
    int i;
    for(i=0; i<change_input-1; i++){
        arr[change_info[i+1]] = origin_arr[i];
    }
}

int main(){
    int change_info[100];
    int * arr;
    int arr_input, change_input;
    int i;
    int origin_arr[100];

    scanf("%d", &arr_input);

    arr = (int *)malloc(sizeof(int) * arr_input);
    for(i=0; i<arr_input; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &change_input);
    for(i=0; i<change_input; i++){
        scanf("%d", &change_info[i]);
    }

    // �ٲٷ��� �ϴ� original ��
    for(i=0; i<change_input; i++){
        origin_arr[i] = arr[change_info[i]];
    }
    
    Swap(arr, origin_arr, change_info, change_input);

    for(i=0; i<arr_input; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}