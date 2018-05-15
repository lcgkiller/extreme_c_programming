#include <stdio.h>

int func2(int x, int a, int b, int c){
    return a*x*x + b*x + c;
}

int main(void){
    int x;
    int a,b,c;
    int d,e,f;
    int fx=0;
    int gx=0;
    scanf("%d %d %d %d", &x, &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    fx = func2(x,a,b,c);
    gx = func2(fx,d,e,f);
    
    printf("%d", gx);

    return 0;
}