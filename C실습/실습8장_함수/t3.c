#include <stdio.h>

int sum(int n){
    return n*(n+1) / 2;
}

int main(void){
    int i=1;
    int result=0;
    int num;
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        result += sum(i);
    }

    printf("%d", result);
    
    return 0;
}