#include <stdio.h>

int main(void){
    int num;
    int i=0, j=0;
    int start = 1;

    scanf("%d", &num);

    for(i=0; i<=num; i++){
        for(j=1; j<i+1; j++){
            printf(" %d ", start % 10);
            start ++;
            
        }
        printf("\n");
    }

    return 0;
}