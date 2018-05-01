#include <stdio.h>

int main(void){
    int i,j,k;
    int num;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(k=0; k<i; k++){
            printf(" ");
        }
        for(j=(num*2-1)-2*i; j>=1; j--){
            printf("*");
        }

        printf("\n");
    }
}