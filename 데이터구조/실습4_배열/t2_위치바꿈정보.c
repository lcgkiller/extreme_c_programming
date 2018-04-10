#include <stdio.h>
#include <stdlib.h>
void Swap(int * arr, int * origin_arr, int * change_info, int change_input){
    /*
    arr : 원래 배열 [3, 81, 9, 12, 0, -9, 36, 33, 91, 10]
    origin_arr : 바꾸려고 하는 위치의 arr값
    change_info : 위치 정보 [3, 8, 0, 9, 3]
    change_input : 위치 정보 길이
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

    // 바꾸려고 하는 original 값
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