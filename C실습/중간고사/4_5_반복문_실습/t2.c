#include <stdio.h>

int main(void){

    int num=1;
    int sum=0;
    while(num!=0){
        scanf("%d", &num);
        sum += num;
    }

    printf("%d", sum);

    return 0;
}