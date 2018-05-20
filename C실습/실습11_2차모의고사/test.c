#include <stdio.h>

int main(void){
    int num, reserve;
    int i;
    int arr[100];
    int cnt=0;
    int idx = -1;
    int origin_idx;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &reserve);

    for(i=0; i<num-2; i++){

        if (reserve==1){
            if(arr[i] == 0){
                printf("%d ", i+1);
                return 0;
            }
        }

        else if (reserve==2){
            if(arr[i] == 0 && arr[i+1] == 0){
                printf("%d %d", i+1, i+2);
                return 0;
            }
        }

        else if (reserve==3){
            if(arr[i] == 0 && arr[i+1] == 0 && arr[i+2] == 0){
                printf("%d %d %d", i+1, i+2, i+3);
                return 0;
            }
        }
    }
    int remain =0;
    for(i=0; i<num; i++){
        if(arr[i]==0) remain++;
    }
    printf("none\n%d", remain);
    return 0;
}