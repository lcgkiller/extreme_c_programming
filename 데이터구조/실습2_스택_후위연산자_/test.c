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

int is_empty(Stack *s){
    if(s->top != -1) 
        return 0;
    return 1;
}

void print(Stack *s){
    int i=0;
    for(i=s->top; i>=0; i--){
        printf("%c", s->s[i]);
    }
    printf("\n");
}

void duplicate(Stack *s){
    char data = peek(s);
    push(s, data);
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
    initStack(&s);
    int i = 0;

    for(i=0; i<strlen(str); i++){
        int priority = priorityOperator(str[i]);

        if (priority == -1){ // A,B,C,D,E,F 출력
            printf("%c", str[i]);
        }
        else if (str[i] == '('){
            push(&s, str[i]); 
        }
        else if (str[i] == ')'){
            while(peek(&s) != '('){
                pop(&s);
            }
            pop(&s); // 마지막에 남은 s.top == '('를 제거하기 위함
        }
        else if(priority>=1){
            if (priority == 1){
                push(&s, '|');
                duplicate(&s);
                i++;
            }
            else if (priority == 2){
                push(&s, '&');
                duplicate(&s);
                i++;
            }
            while (!is_empty(&s) && priority <= priorityOperator(peek(&s)))
            {
                pop(&s);
            }
            push(&s, str[i]);
        }
    }
    while(!is_empty(&s)){
        pop(&s);
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