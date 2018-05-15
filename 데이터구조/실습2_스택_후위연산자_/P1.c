#include <stdio.h>
#include <string.h>
#define MAX_SIZE    100

typedef struct Stack{
    int top;
    char s[MAX_SIZE];
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
}

char pop(Stack *s){
    char temp = s->s[s->top];
    if(temp == '@') temp = '+';
    else if(temp == '#') temp = '-';
    s->top--;
    return temp;
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

int priorityOperator(char operator){
    switch(operator){
        case '(': case ')':           return 0;
        case '|':                     return 1; 
        case '&':                     return 2;
        case '<': case '>':           return 3;
        case '+': case '-':           return 4;
        case '/': case '*':           return 5;
        case '!': case '@': case '#': return 6;     // '@' = '+'  , '#' = '-'
        default:                      return -1;
    }
}

void unaryChecker(char *str){
    int i=0;

    for(i=0; i<strlen(str); i++){
        /*
        case1) flag1 : ù��° ���ڰ� '+'Ȥ�� '-'�� ���
        case2) flag2 : �ǿ����� + ������ + �������� ���
        case3) flag3 : ���� ��ȣ '(' ������ '+' Ȥ�� '-'�� ���
        */
        int flag1 = str[0] == '+' || str[0] == '-';
        int flag2 = priorityOperator(str[i]) == -1 && priorityOperator(str[i+1]) >= 1 && (str[i+2] == '+' || str[i+2] == '-');
        int flag3 = str[i] == '(' && (str[i+1] == '+' || str[i+1] == '-');
        if (flag1 || flag2 || flag3){
            if (flag1){
                if (str[i] == '+') str[i] = '@';
                else if (str[i] == '-') str[i] = '#';
            }

            else if (flag2){
                if (str[i+2] == '+') str[i+2] = '@';
                else if(str[i+2] == '-') str[i+2] = '#';                
            }
            else if (flag3){
                if (str[i+1] == '+') str[i+1] = '@';
                else if(str[i+1] == '-') str[i+1] = '#';
            }
        }
    }
}

void postfix(char *str){
    Stack s; // ������ ����
    initStack(&s);
    unaryChecker(str);

    int i = 0;
    for(i=0; i<strlen(str); i++){
        int priority = priorityOperator(str[i]);

        if (priority == -1){ // A,B,C,D,E,F ���
            printf("%c", str[i]);
        }
        else if (str[i] == '('){
            push(&s, str[i]); 
        }
        else if (str[i] == ')'){
            while(peek(&s) != '('){
                printf("%c", pop(&s));
            }
            pop(&s); // �������� ���� s.top == '('�� �����ϱ� ����
        }
        else if(priority>=1){
            while (!is_empty(&s) && priority <= priorityOperator(peek(&s)))
            {
                if(peek(&s) == '|'){
                    printf("%c", pop(&s));
                }
                else if(peek(&s) == '&'){
                    printf("%c", pop(&s));
                }
                else{
                    printf("%c", pop(&s));
                }
            }
            if(str[i] == '|' || str[i] == '&'){
                push(&s, str[i]);
                i++;
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