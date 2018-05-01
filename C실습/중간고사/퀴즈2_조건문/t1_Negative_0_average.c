#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if ( a<0 || b<0){
        printf("Negative");

        if(a==0||b==0){
            printf("0");
        }
    }
    else{
        printf("%d", (int)((a+b)/2.0+0.5));
    }
    return 0;
}