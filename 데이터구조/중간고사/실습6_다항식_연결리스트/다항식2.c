#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int coef;
    int expo;
    struct Node *next;
}Node;

typedef struct List{
    Node * head;
}List;

Node * getNode(){
    Node * new_node = (Node *)malloc(sizeof(Node));
    return new_node;
}

void initList(List *list){
    list->head = NULL;
}

void appendTerm(List *list, int coef, int expo){
    Node * new_node = getNode();
    
    Node * cur = list->head;

    new_node -> coef = coef;
    new_node -> expo = expo;
    new_node -> next = NULL;

    if ( list->head == NULL ){
        list->head = new_node;
    }
    else{
        cur = list->head;
        while ( cur->next != NULL ){
            cur = cur->next;
        }
    }
}

List addPoly(List *listA, List *listB){
    List new_list;
    initList(&new_list);

    Node *pA = listA->head;
    Node *pB = listB->head;
    
    while( pA && pB ){
        if (pA->coef > pB->coef){
            appendTerm(&new_list, pA->coef, pA->expo);
            pA = pA->next;
        }
        else if (pA->coef < pB->coef){
            appendTerm(&new_list, pB->coef, pB->expo);
            pB = pB->next;
        }
        else{
            int sum = (pA->coef) + (pB->coef);
            if (sum != 0){
                appendTerm(&new_list, sum, pA->expo);
            }
            pA = pA->next;
            pB = pB->next;
        }
    }

    while ( pA != NULL ){
        appendTerm(&new_list, pA->coef, pA->expo);
        pA = pA->next;
    }
    while ( pB != NULL ){
        appendTerm(&new_list, pB->coef, pB->expo);
        pB = pB->next;
    }

    return new_list;
}

void printList(List *list){
    Node * cur = list->head;

    while ( cur != NULL){
        printf(" %d %d", cur->coef, cur->expo);
        cur = cur->next;
    }
}

int main(void){
    int a, b;
    int i;
    int coef, expo;

    List listA;
    List listB;
    List resultList;

    initList(&listA);
    initList(&listB);
    
    scanf("%d", &a);

    for(i=0; i<a; i++){
        scanf("%d %d", &coef, &expo);
        appendTerm(&listA, coef, expo);
    }

    scanf("%d", &b);

    for(i=0; i<b; i++){
        scanf("%d %d", &coef, &expo);
        appendTerm(&listB, coef, expo);
    }

    resultList = addPoly(&listA, &listB);
    printList(&resultList);

    return 0;

}