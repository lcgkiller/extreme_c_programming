#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int top;
    char stack[10];
    int size;
}Stack;

void initStack(Stack stack, int size){
    stack.top = -1;
    stack.size = size;
    stack.stack = stack;
}

void push(Stack *stack, char elem){
    if(stack->size==10){
        printf("Stack FULL\n");
    }
    stack[top++] = elem;
}

char pop(Stack *stack){
    if (stack->top == -1){
        printf("Stack Empty\n");
    }
    return stack->stack[top--];
}

int main(void){
    int size;
    int operation_num;
    int i=0;
    Stack *stack;
    
    scanf("%d %d", &size, &operation_num);
    stack = (char *)malloc(sizeof(char));
    printf("%d\n", stack);
    
    initStack(stack, size);

    // push(stack, 's');

    return 0;
}