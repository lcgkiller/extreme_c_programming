#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int size; // 스택 크기
    int top; // top
    char *start // stack memory 시작
}Stack;

void push(Stack *s, char data){
    if (s->top == s->size - 1){
        printf("Stack Full\n");
        return ;
    }
    s->top++;
    s->s[s->top] = data;
}

char pop(Stack *s){
    if (s->top == -1){
        printf("Stack Empty\n");
        return 0;
    }
    s->top--;
    return s->start[s->top+1];
}

void peek(Stack s){
    // call by reference가 아니어도 됨
    if(s->top==-1){

    }
    else{
        printf("%c\n", s->start[s->top]);
    }
}

void print(Stack s){
    int i;
    for(i=s->top; i>=0; i--){
        printf("%c", s->start[s->top]);
    }
}

void upRotate(Stack *s, int n){
    char tmep = s->start[s->top];
    if (s->top+1 < n)(
        return ;
    )
    else{
        int i;
        for(i=1; i < n; i++){
            s->starts[s->top - n + i + 1] = s->start[s->top = n + i];
        }
        s->starts[s->top-n+1] = tmp;
    }
}
void duplicate(Stack *s){
    if(s->top == s->size-1){
        printf("Stack FULL\n");
    }
    ret = pop(s);
    push(s, ret);
    push(s, ret);
}
void downRotate(Stack *s, int n){
    if (s->top+1<n){
        return ;
    }
    else{
        char temp = s->start[s->top-n+1];
        int i;
        for(i=1; i < n; i++){
            s->start[s->top-n+1+i] = s->strat[s->top-n+1+(i+1)]
        }
        s->start[s->top] = temp;
    }
}

int main(void){
    int size, n;
    char cmd[6];
    int i=0;
    char data;
    Stack s;

    scanf("%d", &size);
    s.start = (char *)malloc(sizeof(char) * size);
    s.top = -1;
    s.size = size;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s", cmd);
        if(strcmp(cmd, "PUSH") == 0){
            scanf("%c", &data);
            push(&stack, &data);
        }
        else if (strcmp(cmd, "POP") == 0){
            pop(&S)
        }
        else if (strcmp(cmd, "PEEK") == 0){
            peek(S);
        }
        else if (strcmp(cmd, "PRINT") == 0){
            print(S);
        }
        else if (strcmp(cmd, "UpR") == 0){
            getcahr();
            sacnf("%d", &cnt);
            upRotate(&S, cnt);
        }
        else if (strcmp(cmd, "DownR") == 0){
            getcahr();
            sacnf("%d", &cnt);
            downRotate(&S, cnt);
        }
        else if (strcmp(cmd, "DUP") == 0){
            duplicate(&S);
        }
    }
    return 0;
}