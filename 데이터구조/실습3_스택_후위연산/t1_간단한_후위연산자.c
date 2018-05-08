#include <stdio.h>
#include <string.h>
#define MAX_SIZE    100

typedef struct Stack{
    int top;
    char s[MAX_SIZE];
}Stack;

void push(Stack *s, char elem){
    s->top++;
    s->s[s->top] = elem;
}

char pop(Stack *s){
    char temp = s->s[s->top];
    s->top--;
    return temp;
}
int is_empty(Stack *s){
    if (s->top != -1)
        return 0;
    return 1;
}

char peek(Stack *s){
    return s->s[s->top];
}

int isOperator(char op){
    switch(op){
        case '(': case ')':
            return 0;
            break;
        case '+': case '-':
            return 1;
            break;
        case '*': case '/':
            return 2;
            break;
        default:
            return -1;
    }
}

void postfix(char *str){
    int i=0;
    Stack s;
    s.top = -1;
    for(i=0; i<strlen(str); i++){
        if(isOperator(str[i]) == -1){
            printf("%c", str[i]);
        }
        else if(str[i]=='('){
            push(&s, str[i]);
        }
        else if(str[i]==')'){
            // printf("\n\n진입1 : %c\n\n", str[i]);
            while(peek(&s) != '('){
                printf("%c", pop(&s));
            }
            pop(&s);
        }
        else if (isOperator(str[i]) >=1 ){
            // printf("\n\n진입2 : %c\n\n", str[i]);
            while(!is_empty(&s) && isOperator(str[i]) <= isOperator(peek(&s))){
                printf("%c", pop(&s));
            }
            push(&s, str[i]);
        }
    }
    while(!is_empty(&s)){
        printf("%c", pop(&s));
    }
}

int main(void){
    char str[100];
    int i=0;
    int num;
    scanf("%d", &num);
    
    for(i=0; i<num; i++){
        scanf("%s", str);
        postfix(str);
        printf("\n");
    }
}