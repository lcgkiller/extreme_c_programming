#include <stdio.h>

void print_triangle(int x){
    int i=0,j=0;
    for(i=1; i<=x; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(void){
    int x=1;
    

    while(x>0){
        scanf("%d", &x);
        print_triangle(x);
    }
}