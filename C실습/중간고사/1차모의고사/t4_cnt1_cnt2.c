#include <stdio.h>

int main(void){

    int cnt1=0, cnt2=0;
    int input;
    while(1){
        scanf("%d", &input);

        if(input<=0) break;

        if(input>=0 && input<=100){
            cnt1++;
            cnt2++;
        }
        else{
            cnt1++;
        }
    }

    printf("%d %d", cnt1, cnt2);

    return 0;
}
