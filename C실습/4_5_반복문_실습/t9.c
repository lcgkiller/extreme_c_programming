#include <stdio.h>

int main(void){

    int num;
    int i;
    int cnt = 0;

    scanf("%d", &num);

    for(i=1; i<=num; i++){
        int temp = i;
        while(1){
            if(temp%10==3) cnt++;
            temp = temp/10;
            if (temp==0) break;
        }
    }

    printf("%d\n", cnt);

    return 0;
}