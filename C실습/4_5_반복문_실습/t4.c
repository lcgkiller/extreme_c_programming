#include <stdio.h>

int main(void){
    int n, m;
    int i;
    scanf("%d %d", &n, &m);

    if (n>m){
        for(i=m; i>0; i--){
            if( (n % i ==0) && (m % i == 0 )){
                printf("%d", i);
                break;
            }
        }
    }
    else{
        for(i=n; i>0; i--){
            if( (n % i ==0) && (m % i == 0 )){
                printf("%d", i);
                break;
            }
        }
    }
    return 0;
}