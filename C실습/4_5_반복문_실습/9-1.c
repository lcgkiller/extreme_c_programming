#include <stdio.h>

int main(void){

    int num;
    int i;
    int cnt=0;
    scanf("%d", &num);

    while(num>0){
        if (num % 10 == 3){
            cnt++;
        }
        num /= 10;
    }

    printf("%d\n", cnt);
    return 0;
}