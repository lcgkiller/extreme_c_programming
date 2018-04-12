#include <stdio.h>

int main(void){
    int n;
    int i=0;
    int sum=0;
    scanf("%d", &n);

    while(i<=n){
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}