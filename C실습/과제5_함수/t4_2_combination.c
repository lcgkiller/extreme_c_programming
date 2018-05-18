#include <stdio.h>

int recur(int num){
    int i;
    int result=1;

    for(i=1; i<=num; i++){
        result *= i;
    }
    return result;
}
int main(void){
    int n, r;

    scanf("%d %d", &n, &r);

    printf("%d", recur(n) / (recur(r)*recur(n-r)));

    return 0;
}