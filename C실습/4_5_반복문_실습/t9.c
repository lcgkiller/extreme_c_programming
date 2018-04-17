#include <stdio.h>

int main(void){

    int num;
    int i;
    int cnt = 0;

    scanf("%d", &num);

    for(i=1; i<=num; i++){
        int temp = i;
        while(temp!=0){
            if(temp%10==3) cnt++;
            temp = temp/10;
        }
    }

    printf("%d\n", cnt);

    return 0;
}