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
    int origin_num;
    scanf("%d", &num);
    origin_num = num;
    for(i=0; i<num; i++){ // 입력하는 로직
        scanf("%d", &arr[i]);
    }

    for(i=num-1; i>=0; i--){ // 거꾸로 출력하는 로직
        printf(" %d", arr[i]);
    }
    printf("\n");

    int outerIndex = num % 3 == 0 ? num / 3 : num / 3 + 1; // 가장 바깥쪽 while문을 도는 조건, 길이가 20이라면 20, 7, 2, 0 순으로 줄어든다. (min, max배열의 길이를 결정하기 위함)
    int flag = 1; // while문 안에서 "첫번째" 시행되는 경우, arr배열에서 min과 max배열을 저장해주기 위함
    while(outerIndex != 0){ // 만약 길이가 20이라면, 20-> 7 -> 3 -> 1 -> 0순으로 떨어진다.
        while( index < num ) {

            if (flag){ // 첫번쨰 min, max배열을 결정하는 경우는 arr이 기준
                min = max = arr[innerIndex]; 
            }
            else{ // 첫번째 min, max배열을 결정한 이후에는 min배열과 max배열의 기준점을 따로 잡아준다.
                min = min_arr[innerIndex];
                max = max_arr[innerIndex];
            }
            while (innerIndex < num && ( innerIndex < index + 3)){ // innerIndex가 입력값에 도달하고, innerIndex가 3씩 뛰는 index값을 초과하면 while문 탈출 
                if(flag){
                    if (min > arr[innerIndex]){ // min 교체 로직
                        min = arr[innerIndex];
                    }
                    if (max < arr[innerIndex]){ // max 교체 로직
                        max = arr[innerIndex];
                    }
                }
                else{
                    if (min > min_arr[innerIndex]){ // min 교체 로직
                        min = min_arr[innerIndex];
                    }
                    if (max < max_arr[innerIndex]){ // max 교체 로직
                        max = max_arr[innerIndex];
                    } 
                }
                innerIndex++; // while문 탈출
            }
            max_arr[p++] = max; // max 저장
            min_arr[q++] = min; // min 저장
            if (p==outerIndex && q==outerIndex){ // min, max 배열의 길이 p, q가 outerIndex에 도달하면 출력하고, 다시 p와 q를 0으로 세팅
                for(i=0; i<p; i++){ // max 배열 출력
                    printf(" %d", max_arr[i]);
                }
                printf("\n");
                for(i=0; i<q; i++){ // min 배열 출력
                    printf(" %d", min_arr[i]);
                }
                printf("\n");
                p = 0;
                q = 0;
            }
            index += 3; // index = 0, 3, 6, 9 로 등장
            innerIndex = index; 
        }
        num = outerIndex;
        flag = 0; // 
        innerIndex = index = 0;
        outerIndex = outerIndex % 3 == 0 ? outerIndex / 3.0 : outerIndex == 1 ? 0 : outerIndex/3.0 + 1; // outerIndex가 3으로 나누어 떨어지면(TRUE) : /3 값
                                                                                                        // 나누어 떨어지지 않을때(FALSE) outerIndex가 1이라면 0으로 만들고 그 이외는 +1
        // printf("outerIndex : %d\n", outerIndex);
    }

    return 0;

}