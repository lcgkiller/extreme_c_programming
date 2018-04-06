#include <stdio.h>

int main(void){
    int num;
    int i=0, j=0;

    scanf("%d", &num);

    while(i<num){
        for(j=i+1; j<=num+i; j++){
            printf(" %d ", j % 10);
        }
        printf("\n");
        i++;
    }
    return 0;
}