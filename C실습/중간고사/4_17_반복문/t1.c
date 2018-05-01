#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int a,b;
    int i,j;
    scanf("%d %d", &a, &b);

    for(i=a; i<=b; i++){
        int result = 1;
        printf("%d!=", i);
        for(j=1; j<=i; j++){
            result *= j;
            if(j==1) printf("%d", j);
            else printf("*%d", j);
        }
        printf("=%d\n",result);
    }

}