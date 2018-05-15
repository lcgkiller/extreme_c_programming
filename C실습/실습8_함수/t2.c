#include <stdio.h>

int sum(int n){
    return n*(n+1) / 2;
}

int main(void){
    int a, b;
    int i=0;
    int result1;
    int result2;
    scanf("%d %d", &a, &b);
    
    result1 = sum(a-1);
    result2 = sum(b);
    printf("%d", result2-result1);

    return 0;
}