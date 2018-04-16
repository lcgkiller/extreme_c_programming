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
        *phead = new_node; // ��� ó���̰� ��� ������ �Һи��ϹǷ� head ��ġ�� �����ϸ� �ȴ�.
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