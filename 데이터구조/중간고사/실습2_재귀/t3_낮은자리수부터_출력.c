#include <stdio.h>

int Recursive(input){

    printf("%d\n", input%10);

    if (input < 10){
        return 0;
    }
    
    return Recursive(input/10);
}

int main(){

    int input;
    scanf("%d", &input);

    Recursive(input);

    return 0;
}