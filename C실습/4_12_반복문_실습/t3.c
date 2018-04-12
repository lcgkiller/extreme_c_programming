#include <stdio.h>

int main(void){
    int n;
    int sum =0;
    int cnt=0;

    scanf("%d", &n);

    while(n>=0){
        sum += n;
        cnt ++;

        scanf("%d", &n);
    }

    printf("%d %.1lf", sum, sum/(double)cnt);

    return 0;
}