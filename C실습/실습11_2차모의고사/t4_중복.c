#include <stdio.h>

int main(void){
    int arr[10];
    int num;
    int i,j;
    int cnt=0;
    int max=0;
    int max_result=0;
    int max_num;
    scanf("%d", &num);

    while(num!=0){
        arr[cnt++] = num % 10;
        num /= 10;
    }

    for(i=0; i<cnt; i++){
        int max_result = 0;
        for(j=0; j<cnt; j++){
            if(arr[i] == arr[j]){
                max_result++;
            }
        }
        if(max < max_result){
            max = max_result;
            max_num = arr[i];
        }
    }

    if(max>1){
        printf("YES\n%d %d\n", max_num, max);
    }
    else if(max==1){
        printf("NO\n");
        for(i=0; i<cnt; i++){
            printf("%d ", arr[i]);
        }
    }
}