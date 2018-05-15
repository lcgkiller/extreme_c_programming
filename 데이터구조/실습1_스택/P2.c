#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack{
    int top;
    char stack[1000];
    int size;
}Stack;

void initStack(Stack *stack){
    stack->top = -1;
}

void push(Stack *stack, char elem){
    stack->top++;
    stack->stack[stack->top] = elem;
    // printf("push top : %d, Added : %c\n", stack->top, elem);
}

void pop(Stack *stack){
    // printf("removed : %c\n", stack->stack[stack->top]);
    stack->top--;
}

void print(Stack *stack){
    int i=0;
    for(i=stack->top; i>=0; i--){
        printf("%c", stack->stack[i]);
    }
    printf("\n");
}

char peek(Stack *stack){
    return stack->stack[stack->top];
}

int main(void){
    char str[1000];
    int i=0;
    int count=0;
    
    Stack * stack;
    stack = (Stack *)malloc(sizeof(Stack));
    initStack(stack);

    fgets(str, 1000, stdin);

    // 괄호의 개수 
    for(i=0; i<strlen(str); i++){
        if (str[i]=='(' || str[i]=='[' || str[i]=='{'){
            count++;
        }
        if(str[i]==')' || str[i]==']' || str[i]=='}'){
            count++;
        }
    }
    
    for(i=0; i<strlen(str); i++){
        int open_flag = (str[i]=='(' || str[i]=='[' || str[i]=='{');
        int closed_flag = (str[i]==')' || str[i]==']' || str[i]=='}');

        if (open_flag){
            push(stack, str[i]);
        }

        else if(closed_flag){
            char peek_chr = peek(stack);
            int flag = (str[i] == ')' && peek_chr == '(') || (str[i] == ']' && peek_chr == '[') || (str[i] == '}' && peek_chr == '{');
            int pair = 0;

            if (flag) { // stack의 top과 일치하는 경우
                pop(stack);
                pair++;
                continue;
            }
            else{
                printf("Wrong_%d\n", count-pair);
                return ;
            }
        }
        else{ // 공백문자 혹은 그 이외의 문자 skip
            continue;
        }
    }
    if(stack->top == -1){
        printf("OK_%d", count);
    }
    else{
        printf("Wrong_%d", count);
    }
    
    return 0;
}