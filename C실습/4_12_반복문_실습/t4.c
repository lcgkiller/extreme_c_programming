#include <stdio.h>

int main(void){
    char a, b;
    int i=0;
    int min, max;
    scanf("%c %c", &a, &b);

    if ( a<= b){
        for(i=a; i<=b; i++){
            printf("%c", i);
        }    
    }
    else{
        for(i=a; i>=b; i--){
            printf("%c", i);
        }    
    }

    

    return 0;
}