#include <stdio.h>

int main(void){
    int a, b, c;
    int d, e, f;
    int strike =0, ball=0;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);

    if (a==d){
        strike +=1;
    }
    if (b==e){
        strike +=1;
    }
    if (c==f){
        strike +=1;
    }

    if (a==e || a==f){
        ball +=1;
    }
    if (b==d || b==f){
        ball +=1;
    }
    if (c==d || c==e){
        ball +=1;
    }

    printf("%dS%dB", strike, ball);
    return 0;
}