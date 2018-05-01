#include <stdio.h>

int main(void){
    int num;
    int i=1;
    int sum=0;
    int cnt=0;

    scanf("%d", &num);

    while(sum<num){
        sum += i;
        i++;
        cnt ++;
    }

    printf("%d %d", sum-cnt, cnt-1);
    return 0;
}