#include <stdio.h>

int f1(int x, int y){
    int result = y;
    if (x==1){
        printf("Americano");
        result -= 500;
    }
    else if(x==2){
        printf("Cafe Latte");
        result -= 400;
    }
    else if(x==3){
        printf("Lemon Tea");
        result -= 300;
    }
    printf("\n");
    return result;
}

int f2(int x){
    return x / 500;
}

void f3(int x){
    int result = x / 500;
    printf("%d", (x - (result*500)) / 100);
}

int main(void){
    int N;
    int money;
    int result;
    scanf("%d %d", &N, &money);
    
    result = f1(N, money);
    printf("%d ", f2(result));
    f3(result);

    return 0;
}