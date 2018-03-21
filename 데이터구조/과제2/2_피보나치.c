#include <stdio.h>

int Fivo(int n){

    int total = 0;

    if (n == 1){
        return 1;
    }
    
    if (n == 2){
        return 1;
    }

    return Fivo(n-2) + Fivo(n-1);
}

int main(void){
    int n;
    int result;
    scanf("%d", &n);

    result = Fivo(n);

    printf("%d\n", result);

    return 0;
}