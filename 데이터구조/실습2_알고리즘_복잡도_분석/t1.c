#include <stdio.h>

int Sum(input){

    int total = 0;
    total += input;
    if (input==1){
        return total;
    }

    return total + Sum(--input);
}

int main(){
    int input;
    int result;

    scanf("%d", &input);
    result = Sum(input);
    printf("%d", result);
    return 0;
}