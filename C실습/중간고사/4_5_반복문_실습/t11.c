#include <stdio.h>

int main(void){

    int num;
    int i, j, k;

    scanf("%d", &num);

    for(i=1; i<=6; i++){
        for(j=1; j<=6; j++){
            for(k=1; k<=6; k++){
                if (i+j+k == num){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}