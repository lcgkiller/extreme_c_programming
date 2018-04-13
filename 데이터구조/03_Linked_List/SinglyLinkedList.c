#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
    element data;
    struct ListNode *link;
}ListNode;


void insert_node(ListNode **phead, ListNode *p, ListNode *new_node){
    if (*phead == NULL){
        new_node -> link = NULL;
        *phead = new_node;
    }
    else if (p == NULL){
        new_node -> link = *phead;
        *phead = new_node;
    }
    else{
        new_node -> link = p->link;
        p->link = new_node;
    }
}

void remove_node(ListNode **phead, ListNode *p, ListNode *removed){
    if (p==NULL){
        *phead = (*phead)->link;
    }
    else{
        p->link = removed->link;
    }
    free(removed);
}

void display_recur(ListNode *head){
    ListNode *p = head;
    if (p!=NULL){
        printf("%d -> ", p->data);
        display_recur(p->link);
    }
}

ListNode *search(ListNode *head, int x){
    ListNode *p = head;
    while(p!=NULL){
        if(p->data=x){
            return p;
        }
        p = p->link;
    }
    return p;
}

ListNode *concat(ListNode *head1, ListNode *head2){

    ListNode *p;

    if(head1 == NULL) return head2;
    else if(head2 == NULL) return head1;
    else{
        p = head1;
        while(p!=NULL){
            p = p->link;
            p->link = head2;
            return head1;
        }
    }
}

ListNode *reverse(ListNode *head){
    ListNode *p, *q, *r;
    p = head;
    q = NULL;
    while(p!=NULL){
        r = q;
        q = p;
        p = p->link;
        q->link = r;
    }
    return q;
}

ListNode *create_node(element data, ListNode *link){
    ListNode * new_node = (ListNode *)malloc(sizeof(ListNode));
    new_node->data = data;
    new_node->link = link;
    return new_node;
}

int main(void){
    ListNode *list1 = NULL, *list2=NULL;
    ListNode *p = NULL;

    insert_node(&list1, NULL, create_node(10, NULL));
    insert_node(&list1, NULL, create_node(20, NULL));
    insert_node(&list1, NULL, create_node(30, NULL));
    display_recur(list1);

    return 0;   
}