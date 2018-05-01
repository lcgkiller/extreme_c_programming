#include <stdio.h>
#include <stdlib.h>


struct Stack {
    int top;
    char *stack;
    int size;
}Stack;

void push(Stack S, char x){
    // Stack Full check;
    if (S.top == S.size -1){ // Stack Full
        print("Full Exception Error\n");
    }
    S.top++;
    S.stack[S.top] = x;

}

int main(void){
    char input;
    scanf("%d", &size);
    Stack Stack;
    Stack.stack = (char *)malloc(sizeof(char));
    Stack.top = -1;

    scanf("%c", &input);
    push(Stack, input);
}