#include <stdio.h>

int main(void){
    int num;
    int i,j,k ;
    scanf("%d", &num);

    for(i=0; i<=num; i++){
        for(j=0; j<num-i; j++){
            printf(" ");
        }
        for(k=1; k<i*2; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}