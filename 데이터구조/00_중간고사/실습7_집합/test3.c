#include <stdio.h>
#include <stdlib.h>

typedef struct Set{
    int data;
    struct Set * next;
}Set;

Set * get_node(){
    Set * new_node = (Set *)malloc(sizeof(Set));
    new_node -> next = NULL;
    return new_node;
}

void appendTerm(Set *list, int data){
    Set * new_node = get_node();
    new_node->data = data;
    new_node->next = NULL;

    if (list->next == NULL){
        list->next = new_node;
    }
    else{
        Set * cur = list->next;
        // printf("cur->next : %d\n", cur->next);
        while (cur->next != NULL){
            cur = cur->next;
        }
        cur->next = new_node; // Æ²·È´ø ºÎºÐ
    }
}

void printSet(Set *list){
    Set * cur = list->next;

    while (cur != NULL){
        printf(" %d", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main(void){
    int numA, numB, input;
    int i;

    Set *A = get_node();
    Set *B = get_node();

    scanf("%d", &numA);

    for(i=0; i<numA; i++){
        scanf("%d", &input);
        appendTerm(A, input);
    }

    scanf("%d", &numB);

    for(i=0; i<numB; i++){
        scanf("%d", &input);
        appendTerm(B, input);
    }

    printSet(A);
    printSet(B);
}