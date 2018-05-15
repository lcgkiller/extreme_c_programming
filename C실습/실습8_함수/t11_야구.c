#include <stdio.h>

int a,b,c;

int count_strike(int x, int y, int z){
    int strike =0;

    if (x==a) strike++;
    if (y==b) strike++;
    if (z==c) strike++;

    return strike;
}

int count_ball(int x, int y, int z){
    int ball = 0;

    if (x==b || x==c) ball++;
    if (y==a || y==c) ball++;
    if (z==a || z==b) ball++;

    return ball;
}

int main(void){

    int x,y,z;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);
    printf("%dS%dB\n", count_strike(x,y,z), count_ball(x,y,z));
    while(x!=a || y!=b || z!=c){
        scanf("%d %d %d", &x, &y, &z);
        printf("%dS%dB\n", count_strike(x,y,z), count_ball(x,y,z));
    }
    return 0;
}