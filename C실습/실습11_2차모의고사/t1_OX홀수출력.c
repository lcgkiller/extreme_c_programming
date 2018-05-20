#include <stdio.h>

int main(void){
    int num=3;
    int i,j;

    while(num >=1 && num % 2 !=0){
        scanf("%d", &num);
        if (num % 2 == 0 || num < 0 || num == 1 ) break;
        for(i=0; i<num; i++){
            for(j=0; j<num; j++){
                if(j==i || j==num-(i+1)){
                    printf("O");
                }
                else{
                    printf("X");
                }
            }
            printf("\n");
        }
    }
        
    return 0;
}