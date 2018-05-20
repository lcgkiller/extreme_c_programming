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

    for(i=0; i<num-1; i++){
        int flag = arr[i+1] == 0;
        int origin_idx = i;;
        if(arr[i]==0){
            cnt++;
            origin_idx = i;
            printf("ÀÔ°¶ : %d, 0ÀÇ °³¼ö : %d\n", i, cnt);
            if (flag){
                if(cnt+1==reserve){
                    idx = i;
                    int until = origin_idx+reserve;
                    while(origin_idx < until){
                        printf("%d ", origin_idx+1);
                        origin_idx++;
                    }
                    // idx = i;
                    // printf("idx : %d\n", idx);
                    break;
                }
            }
        }
    }
    if(idx==-1){
        int cnt =0;
        for(i=0; i<num; i++){
            if(arr[i]==0) cnt++;
        }
        printf("none\n%d", cnt);
    }
    return 0;
}