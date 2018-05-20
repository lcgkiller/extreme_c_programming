#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE    100

typedef struct Stack{
    int top;
    double s[MAX_SIZE];
}Stack;

void push(Stack *s, double elem){
    // printf("push : %2.lf\n", elem);
    s->top++;
    s->s[s->top] = elem;
}

double pop(Stack *s){
    double temp = s->s[s->top];
    s->top--;
    return temp;
}
int is_empty(Stack *s){
    if (s->top != -1)
        return 0;
    return 1;
}

double peek(Stack *s){
    return s->s[s->top];
}

void calculate(Stack *s, char op, double x, double y){
    switch(op){
        case '+':
            // printf("x : %lf, y: %lf, x+y : %.2lf\n", x, y, x+y);
            push(s, x+y);
            break;
        case '-':
            // printf("x : %lf, y: %lf, x-y : %.2lf\n", x, y, x-y);
            push(s, x-y);
            break;
        case '*': 
            // printf("x : %lf, y: %lf, x*y : %.2lf\n", x, y, x*y);
            push(s, x*y);
            break;
        case '/':
            // printf("x : %lf, y: %lf, x/y : %.2lf\n", x, y, x/y);
            push(s, x/y);
            break;
    }
}

int main(void){
    Stack s;
    s.top = -1;
    char str[100];
    int i=0;
    int num;
    double input;
    scanf("%d", &num);
    int array[num];
    
    scanf("%s", str);

    for(i=0; i<num; i++){
        scanf("%lf", &input);
        array[i] = input;
    }

    for(i=0; i<strlen(str); i++){
        char ch = str[i];
        switch(ch){
            case '+': case '-': case '*': case '/':
                calculate(&s, ch, pop(&s), pop(&s));
                break;
            default:
                printf("ch : %c, d : %d, ## : %d\n", ch, ch-'A', array[ch-'A']);
                push(&s, array[ch-('A')]);
                break;
        }
    }
    printf("%.2lf", peek(&s));
    printf("\n");
}