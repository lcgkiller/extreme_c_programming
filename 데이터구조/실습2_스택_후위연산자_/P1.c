#include <stdio.h>
#include <string.h>
#define MAX_SIZE    100

typedef struct Stack{
    int top;
    char s[MAX_SIZE];
    int size;
}Stack;

void initStack(Stack *s){
    s->top = -1;
}

void push(Stack *s, char data){
    if (s->top > MAX_SIZE){
        printf("Stack is FULL\n");
    }
    s->top++;
    s->s[s->top] = data;
    // printf("\npush : %c\n", data);
}

void pop(Stack *s){
    char temp = s->s[s->top];
    if(s->top == -1) return ;
    else{
        s->top--;
        printf("%c", temp);
    }
}

char peek(Stack *s){
    return s->s[s->top];
}

void print(Stack *s){
    int i=0;
    for(i=s->top; i>=0; i--){
        printf("%c", s->s[i]);
    }
    printf("\n");
}

int priorityOperator(char operator){
    switch(operator){
        case '(': case ')':
            return 0;
        case '|':
            return 1;
        case '&':
            return 2;
        case '<': case '>':
            return 3;
        case '+': case '-':
            return 4;
        case '/': case '*':  
            return 5;
        case '!': 
            return 6;
        default:
            return -1;
    }
}
void postfix(char *str){
    Stack s; // 연산자 스택
    int i = 0;
    initStack(&s);
    for(i=0; i<strlen(str)-1; i++){
        int priority = priorityOperator(str[i]);

        if (priority == -1){ // A,B,C,D,E,F 출력
            printf("%c", str[i]);
        }

        else if (priority>=0) {
            if (str[i] == '('){
                push(&s, str[i]);
                continue;
            }
            else if (str[i] == ')'){
                char temp = peek(&s);
                while(temp != '('){
                    printf("\ntemp : %c\n", temp);
                    pop(&s);
                    temp = peek(&s);
                }
                printf("\ntest=====stack=====\n");
                print(&s);
                printf("=====stack=====\n");
                s.top--; // 마지막에 남은 s.top == '('를 제거하기 위함
                printf("\nafter test=====stack=====\n");
                print(&s);
                printf("=====stack=====\n");
                continue;
            }
            
            else if(s.top != -1 && priorityOperator(peek(&s)) >= priority){
                // printf("\n=====pop before stack↓=====\n");
                // print(&s);
                // printf("=====pop before stack↑=====\n");  
                if (peek(&s) != '('){
                    while(s.top > -1){
                        pop(&s);
                    }
                } 

                // pop(&s);
                // printf("\n=====push1 before stack↓=====\n");
                // print(&s);
                // printf("=====push1 before stack↑=====\n");   
                push(&s, str[i]); 
                // printf("\n=====push1 after stack↓=====\n");
                // print(&s);
                // printf("=====push1 after stack↑=====\n");   
                continue;
            }

            // if(priority == 4){
            //     printf("\n\n니 면상 보자 : %c\n\n", str[i]);
            // }
            // printf("\n=====push2 before stack↓=====\n");
            // print(&s);
            // printf("=====push2 before stack↑=====\n");   
            push(&s, str[i]); 
            // printf("\n=====push2 after stack↓=====\n");
            // print(&s);
            // printf("=====push2 after stack↑=====\n");   
        }
    }

    while(s.top>-1){
        // printf("\n=====## stack↓=====\n");
        // print(&s);
        // printf("=====stack↑=====\n");   
        pop(&s);
        if(s.top==-1){
            printf("\n");
        }
    }
}

int main(void){
    char str[100];
    Stack s; // 스택
    int num, i;

    scanf("%d", &num);
    // getchar();

    fgets(str, 100, stdin);
    postfix(str);


    // for(i=0; i<num; i++){
    //     fgets(str, 100, stdin);
    //     postfix(str);
    // }
    
    return 0;
}