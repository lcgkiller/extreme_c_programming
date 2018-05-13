#include <stdio.h>



int main(void){
    int arr[20]; // 입력 배열
    int num; // 입력할 정수 숫자
    int i=0;
    int min=21, max=-1; // 입력값의 정수 범위
    int max_arr[10]; // max배열 저장
    int min_arr[10]; // min배열 저장
    int p=0, q=0; // max, min배열의 인덱스 값
    int index = 0;  // 0, 3, 6 단위로 뛰는 index
    int innerIndex = 0; // 0, 1, 2, 3, ... 순으로 뛰는 index

    scanf("%d", &num);
    for(i=0; i<num; i++){ // 입력하는 로직
        scanf("%d", &arr[i]);
    }

    for(i=num-1; i>=0; i--){ // 거꾸로 출력하는 로직
        printf(" %d", arr[i]);
    }
    printf("\n");
    while( index < num ) {
        min = max = arr[innerIndex]; // min, max의 주기적인 교체
        while (innerIndex < num && ( innerIndex < index + 3)){ // innerIndex가 입력값에 도달하고, innerIndex가 3씩 뛰는 index값을 초과하면 while문 탈출 
            printf("index : %d, innerIndex : %d\n", index, innerIndex);
            if (min > arr[innerIndex]){ // min 교체 로직
                min = arr[innerIndex];
            }
            if (max < arr[innerIndex]){ // max 교체 로직
                max = arr[innerIndex];
            }
            innerIndex++;
        }
        max_arr[p++] = max; // max 저장
        min_arr[q++] = min; // min 저장
        index += 3; // index = 0, 3, 6, 9 로 등장
        innerIndex = index; 
    }
    for(i=0; i<p; i++){ // max 배열 출력
        printf(" %d", max_arr[i]);
    }
    printf("\n");
    for(i=0; i<q; i++){ // min 배열 출력
        printf(" %d", min_arr[i]);
    }
    return 0;

}