#include <stdio.h>

int main(void){
    int num;
    int answer;
    int cnt = 0;
    scanf("%d", &num);

    while(cnt!=2){
        scanf("%d", &answer);
        
        if (num == answer){
            printf("RIGHT\n");
            break;
        }
        else if (num > answer){
            printf("UP\n");
        }
        else{
            printf("DOWN\n");
        }
        cnt++;
    }
    

    return 0;
}