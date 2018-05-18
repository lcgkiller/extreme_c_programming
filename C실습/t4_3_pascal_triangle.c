#include <stdio.h>

int recur(int num){
    int i;
    int result=1;

    for(i=1; i<=num; i++){
        result *= i;
    }
    return result;
}

int combi(int n, int r){
    int i, j;
    return recur(n) / (recur(r)*recur(n-r));
}

int pascal(int n){
    int i, j;

    for(i=0; i<=n; i++){
        for(j=-2*i+2*n; j>=0; j--){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("   %d", combi(i, j));
        }
        printf("\n")    ;
    }
}

int main(void){
    int n;
    int i=0, j=0;

    scanf("%d", &n);

    pascal(n);
    
    return 0;
}