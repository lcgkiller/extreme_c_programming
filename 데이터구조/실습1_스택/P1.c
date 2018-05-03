#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack{
    int top;
    char *stack;
    int size;
}Stack;

void initStack(Stack *stack, int size){
    stack->top = -1;
    stack->size = size;
}

void push(Stack *stack, char elem){
    if((stack->top)+1 == stack->size){
        printf("Stack FULL\n");
        return ;
    }
    else{
        stack->top++;
        stack->stack[stack->top] = elem;
    }
    // printf("top : %d, Added : %c\n", stack->top, elem);
}

char pop(Stack *stack){
    if (stack->top == -1){
        printf("Stack Empty\n");
        return ' ';
    }
    
    return stack->stack[stack->top--];
}

void print(Stack *stack){
    int i=0;
    for(i=stack->top; i>=0; i--){
        printf("%c", stack->stack[i]);
    }
    printf("\n");
}

void upRotate(Stack *stack, int n){
    char temp = stack->stack[stack->top];
    int top = stack->top;
    int i=0;

    if (n-1 > top || n < 0){
        return ;
    } 
    else{
        for(i=0; i<n-1; i++){
            stack->stack[stack->top-(i)] = stack->stack[stack->top-(i+1)];
        }
        stack->stack[stack->top-(n-1)] = temp;
    }   
}

void downRotate(Stack *stack, int n){ // ½Ã°£
    char temp = stack->stack[stack->top-(n-1)];
    int top = stack->top;
    int i=0;
    
    if (n-1 > top || n < 0){
        return ;
    } 
    else{
        for(i=n-1; i>=0; i--){
            stack->stack[top-(i)] = stack->stack[top-(i-1)];
        }
        stack->stack[top] = temp;
    }
}

char peek(Stack *stack){
    if (stack->top==-1){
        printf("Stack Empty\n");
        return ' ';
    }
    return stack->stack[stack->top];
}

void duplicate(Stack * stack){
    if (stack->top==-1){
        printf("Stack Empty\n");
    }
    else{
        char data = peek(stack);
        push(stack, data);
    }
}


int main(void){
    int size;
    int num_of_operation;
    int i=0;
    int input;
    char str[10];
    char elem;
    Stack *stack;
    
    scanf("%d", &size);
    stack = (Stack *)malloc(sizeof(Stack));
    stack->stack = (char *)malloc(size * sizeof(char));

    scanf("%d", &num_of_operation);
    initStack(stack, size);

    for(i=0; i<num_of_operation; i++){
        scanf("%s", &str);

        if (strcmp(str, "PUSH")==0){
            getchar();
            scanf("%c", &elem);
            push(stack, elem);
        }
        else if (strcmp(str, "POP")==0){
            pop(stack);
        }
        else if (strcmp(str, "PRINT")==0){
            print(stack);
        }
        else if (strcmp(str, "UpR")==0){
            getchar();
            scanf("%d", &input);
            upRotate(stack, input);
        }

        else if (strcmp(str, "DownR")==0){
            getchar();
            scanf("%d", &input);
            downRotate(stack, input);
        }

        else if (strcmp(str, "DUP")==0){
            duplicate(stack);
        }
        else if (strcmp(str, "PEEK")==0){
            printf("%c\n", peek(stack));
        }
    }

    return 0;
}