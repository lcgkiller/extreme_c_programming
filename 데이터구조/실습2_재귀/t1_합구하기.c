#include <stdio.h>

int Sum(int input){

    if (input==0){
        return 0;
    }
    return input + Sum(input-1);
}

int main(){
    int input;
    int result;

    scanf("%d", &input);
    result = Sum(input);
    printf("%d", result);
    return 0;
}