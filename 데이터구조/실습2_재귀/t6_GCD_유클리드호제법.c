#include <stdio.h>

int GCD(int a, int b){

    if (b == 0){
        printf("%d\n", a);
        return 0;
    }
    return GCD(b, a%b);
}
int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if ( a >= b)
        GCD(a, b);
    else
        GCD(b, a);

    return 0;
}

