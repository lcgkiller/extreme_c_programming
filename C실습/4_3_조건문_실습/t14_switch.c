#include <stdio.h>

int main(void){
    int num;
    int input;
    int a, b;
    int five_hundred;
    int one_hundred;
    scanf("%d\n", &num);
    scanf("%d", &input);

    switch(num){
        case(1):
            five_hundred = (input-500) / 500;
            one_hundred = ((input-500) - five_hundred * 500) / 100;
            printf("Americano\n");
            printf("%d %d", five_hundred, one_hundred);
            break;
        case(2):
            five_hundred = (input-400) / 500;
            one_hundred = ((input-400) - five_hundred * 500) / 100;
            printf("Cafe Latte\n");
            printf("%d %d", five_hundred, one_hundred);
            break;
        case(3):
            five_hundred = (input-300) / 500;
            one_hundred = ((input-300) - five_hundred * 500) / 100;
            printf("Lemon Tea\n");
            printf("%d %d", five_hundred, one_hundred);
            break;
    }
    return 0;
}