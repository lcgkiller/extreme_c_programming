#include <stdio.h>

int main(void){
    int n;
    int i=1;

    scanf("%d", &n);

    while(i!=n+1){
        if (n % i == 0)
            printf("%d ", i);
        i++;
    }

    return 0;
}