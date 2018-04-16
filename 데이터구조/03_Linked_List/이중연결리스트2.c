#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char data;
    struct Node *prev;
    struct Node *next;
}Node;

typedef struct List{
    struct Node * head;
    struct Node * tail;
}List;

Node * get_node(){
    Node *new_node = (Node *)malloc(sizeof(Node));
    return new_node;
}

void initList(List *list){
    list->head = get_node();
    list->tail = get_node();

    list->head->next = list->tail;
    list->tail->prev = list->head;
}

void add(List *list, int pos, char data){
    Node *cur = list->head;
    Node *new_node = get_node();
    new_node->data = data;
    int i = 0;
    if (pos <= 0){
        printf("invalid position\n");
        return ;
    }
    for(i=1; i<pos; i++){
        cur = cur->next;
        if (cur == list->tail){
            printf("inalid position\n");
            return;
        }
    }
    new_node->next = cur->next;
    cur->next->prev = new_node;
    new_node->prev = cur;
    cur->next = new_node;
}

void delete(List *list, int pos){
    Node *cur = list->head;
    int i=0;


    for(i=1; i<=pos; i++){
        cur = cur->next;
    }
    
    if (cur->data == ' '){
        printf("invalid position\n");
    }
    cur->next->prev = cur->prev;
    cur->prev->next = cur->next;
    free(cur);
}

char get_entry(List *list, int pos){
    Node *cur = list->head->next;
    int i=0;

    if (pos <= 0){
        printf("invalid position\n");
        return ' ';
    }

    for(i=1; i<pos; i++){
        cur = cur->next;
        if (cur == list->tail){
            printf("invalid position\n");
            return ' ';
        }
    }
    return cur->data;
}

void print(List *list){
    Node *cur = list->head->next;
    while ( cur != list->tail ){
        printf("%c", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main(void){
    int num;
    int i=0;
    char operation;
    int pos;
    char elem;

    List list;
    initList(&list);

    scanf("%d", &num);

    for(i=0; i<num; i++){
        getchar();
        scanf("%c", &operation);
        switch(operation){
            case 'A':
                scanf("%d %c", &pos, &elem);
                add(&list, pos, elem);
                break;
            case 'D':
                scanf("%d", &pos);
                delete(&list, pos);
                break;
            case 'G':
                scanf("%d", &pos);
                get_entry(&list, pos);
                break;
            case 'P':
                print(&list);
                break;
        }
    }

    return 0;
}