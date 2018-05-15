#include <stdio.h>

int N;

void die3(int x, int y, int z){
    if(x<=6 && y<=6&& z<=6){
        if(x+y+z==N){
            printf("%d %d %d\n", x, y, z);
        }
    }
}

void die2(int x, int y){
    int i;
    for(i=1; i<=N-x-y; i++){
        die3(x, y, i); 
    }   
}

void die1(int x){
    int i;
    for(i=1; i<=N-x; i++){
        die2(x, i);
    }
}


int main(void){
    int i;
    scanf("%d", &N);

    for(i=1; i<N; i++){
        die1(i);
    }
}