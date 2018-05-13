#include <stdio.h>

int main(void){
    int i=0, j=0;
    int arr[10];
    int k[10]; // key를 저장
    int v[10] = {0, }; // value(count값)을 저장 (0으로 초기화하는 것이 포인트)
    int index = 0;

    for(i=0; i<10; i++){  // 사용자로부터 배열 입력
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++){
        if(i==0){              // i=0인 경우에만 k[0], v[0]을 손수 입력
            k[i] = arr[i];     // 첫 key값 저장
            v[i]++;            // i=0인 경우 첫번째 값은 무조건 count++
            index++;           // k 배열을 순회하는 index
        }
        else{
            int flag = 0;
            for(j=0; j<index; j++){ // index는 k배열을 순회하기 위함
                if(k[j] == arr[i]){ // 만약 k배열에 arr[i]와 일치하는 값이 있으면
                    flag = 1;       // flag=1로 선정하고 for문탈출
                    break;
                }
            }
            if (flag){
                v[j]++; // 일치하는 값이 있으면 v값의 count를 증가
            }
            else{   // 일치하는 값이 없다면
                k[index] = arr[i]; // 한칸 증가된 k[index]에 새로운 값 arr[i]를 저장
                v[index]++;        // v값을 하나 늘려주고
                index++;           // index값을 하나 증가시켜서 k배열을 순회하는 인덱스 를 늘려준다.
            }
        }
    }

    for(i=0; i<index; i++){
        printf("%d %d\n", k[i], v[i]);
    }
}