#include <stdio.h>

void Hanoi(int num, char from, char aux, char to){

    if (num==1){
        printf("%c %c\n", from, to);
        return ;
    }
    else{
        Hanoi(num-1, from, to, aux);
        printf("%c %c\n", from, to);
        Hanoi(num-1, aux, from, to);
    }
}

int main(void){
    int num;
    
    scanf("%d", &num);

    Hanoi(num, 'A', 'B', 'C');

    return 0;
}