#include <stdio.h>

int main(void){

    int sum=0;
    int input;
    int cnt=0;
    double avg;

    scanf("%d", &input);

    if( !input==0 || !(input<0)){
        sum += input;
        cnt++;
        while(1){
            scanf("%d", &input);
            if (input > 100) continue;
            if (input==0 || input<0) break;
            sum += input;
            cnt++;
        }
    }
    

    avg = sum / (double)cnt;

    printf("%d %.2f %d", sum ,avg, cnt);

    return 0;
}