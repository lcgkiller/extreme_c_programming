#include <stdio.h>

int main(void){
    int a,b,c,d,e;
    int result = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    result += a >= 0 ? a : 0;
    result += b >= 0 ? b : 0;
    result += c >= 0 ? c : 0;
    result += d >= 0 ? d : 0;
    result += e >= 0 ? e : 0;
    printf("%d", result);
    return 0;
}