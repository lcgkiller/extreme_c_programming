#include <stdio.h>

int main(void){
    int num;
    int i,j,k ;
    scanf("%d", &num);

    // i, num-i
    for(i=0; i<=num; i++){
        for(j=0, k=0; j<=2, k<=num-2; j++, k++){
            printf(" O ");
        }
        printf("\n");
    }

    return 0;
}