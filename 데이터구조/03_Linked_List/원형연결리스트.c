#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode * link;
}ListNode;

ListNode * create_node(int data, ListNode *link){
    ListNode * new_node;
    new_node = (ListNode *)malloc(sizeof(ListNode));
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}

void insert_first(ListNode **phead, ListNode *new_node){
    if ( *phead == NULL ){
        *phead = new_node;
        new_node -> link = new_node;
    }
    else{
        new_node -> link = (*phead)->link;
        (*phead) -> link = new_node;
    }

}

void insert_last(ListNode **phead, ListNode *new_node){
    if (*phead == NULL ){
        *phead = new_node;
        new_node -> link = new_node;
    }
    else{
        new_node->link = (*phead) -> link;
        (*phead)->link = new_node;
        *phead = new_node; // 어디가 처음이고 어디가 끝인지 불분명하므로 head 위치만 변경하면 된다.
    }
}

void display(ListNode *head){
    ListNode * cur;

    if ( head == NULL ) return;

    cur = head;

    do{
        printf("%d -> ", cur->data);
        cur = cur->link;
    }while( cur != head );
}

int main(void){
    ListNode *list = NULL;

    insert_first(&list, create_node(20, NULL)); // 20(head)
    insert_first(&list, create_node(10, NULL)); // 10<- 
    insert_last(&list, create_node(30, NULL)); //  10->20->30

    display(list);

    return 0;
}