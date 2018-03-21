#include <stdio.h>

int Recursive(input){

    int total = 0;

    total += input % 10;
    if (input < 10){
        return total;
    }

    return total + Recursive(input/10);
}

int main(){

    int input;
    int result;
    scanf("%d", &input);

    result = Recursive(input);
    printf("%d\n", result);

    return 0;
}