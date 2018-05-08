#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE    100

typedef struct Stack{
    int top;
    int s[MAX_SIZE];
}Stack;

void push(Stack *s, int elem){
    // printf("\npush : %d\n", elem);
    s->top++;
    s->s[s->top] = elem;
}

int pop(Stack *s){
    char temp = s->s[s->top];
    s->top--;
    return temp;
}
int is_empty(Stack *s){
    if (s->top != -1)
        return 0;
    return 1;
}

int calculate(Stack *s, char op, int x, int y){
    // printf("op : %c, x : %d, y : %d\n", op, x, y);
    switch(op){
        case '+':
            // printf("x+y : %d", x+y);
            return x+y;
            break;
        case '-':
            // printf("x-y : %d", x-y);
            return x-y;
            break;
        case '*': 
            // printf("x*y : %d", x*y);
            return x*y;
            break;
        case '/':
            // printf("x/y : %d", x/y);
            return x/y;
            break;
    }
}

int isOperator(Stack *s, char op){
    switch(op){
        case '+': case '-': case '*': case '/':
            return 1;
        default:
            return 0;
    }
}

int postfix(char *str){
    int i=0;
    Stack s;
    s.top = -1;
    int result=0;
    for(i=0; i<strlen(str); i++){
        if(isOperator(&s, str[i]) == 0){ // 1,2, .. 9
            char temp = str[i];
            int _temp = atoi(&temp);
            push(&s, _temp);
        }
        else{ // 피연산자
            int temp2 = pop(&s);
            int temp1 = pop(&s);
            result = calculate(&s, str[i], temp1, temp2);
            push(&s, result);
        }   
    }

    return result;
}

int main(void){
    char str[100];
    int i=0;
    int num;
    scanf("%d", &num);
    
    for(i=0; i<num; i++){
        scanf("%s", str);
        printf("%d", postfix(str));
        printf("\n");
    }
}