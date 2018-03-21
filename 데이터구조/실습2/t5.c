#include <stdio.h>

void Hanoi(int n, char from, char aux, char to){

    if (n == 1){
        printf("%c %c\n", from, to);
    }
    else{
        Hanoi(n-1, from, to, aux);
        printf("%c %c\n", from, to);
        Hanoi(n-1, aux, from, to);
    }
}

int main(void){
    int input;
    
    scanf("%d", &input);

    Hanoi(input, 'A', 'B', 'C');
    return 0;
}