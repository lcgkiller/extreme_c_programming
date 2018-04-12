#include <stdio.h>

int main(void){

    int i=1;
    int num;
    int sum= 0;
    scanf("%d", &num);

    for(; ; ){
        if(i>num) break;
        sum += i++;
    }
    printf("%d\n", sum);
    return 0;
}