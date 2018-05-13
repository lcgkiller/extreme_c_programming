#include <stdio.h>

int main(void){
    int n;
    int i;
    int arr[20]; // 배열 저장
    scanf("%d", &n);

    for(i=0; i<n; i++){ // 사용자로부터 배열을 입력받음
        scanf("%d", &arr[i]);
    }

    for(i=n-1; i>=0; i--){ // 거꾸로 출력하기 위해서 n-1부터 0까지 출력
        printf(" %d", arr[i]);
    }

    return 0;
}