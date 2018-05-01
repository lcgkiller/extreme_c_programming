#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    if (a>=b){
        if (b*b == a)
            printf("%d*%d=%d\n", b, b, b*b);
        else
            printf("none\n");
    }
    else{
        if (a*a == b)
            printf("%d*%d=%d\n", a, a, a*a);
        else
            printf("none\n");
    }
    return 0;
}