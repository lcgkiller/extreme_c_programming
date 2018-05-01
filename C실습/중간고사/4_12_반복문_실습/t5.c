#include <stdio.h>

int main(void){
    int i,j;
    int num;

    scanf("%d", &num);

    for(i=0; i<=num; i++){
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}