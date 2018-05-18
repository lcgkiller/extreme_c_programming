#include <stdio.h>
void triangle(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=(n-1)-i; j>=0; j--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
void reverse(int n){
    int i=0;
    int j;
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=(2*n-1)-(i*2); j>=1; j--){
            printf("*");                    
        }
        printf("\n");
    }
}
int main(void){
    int num;

    scanf("%d", &num);

    if(num%2==0){
        triangle(num);
    }
    else{
        reverse(num);
    }
    return 0;
}