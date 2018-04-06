#include <stdio.h>

int main(void){
    int num;
    int i,j;
    scanf("%d", &num);

    for(i=0; i<=num; i++){
        for(j=1; j<i*2; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}