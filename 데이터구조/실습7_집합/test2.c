#include <stdio.h>
#include <stdlib.h>

typedef struct Set{
    int data;
    struct Set * next;
}Set;

Set * get_node(){
    Set * new_node = (Set *)malloc(sizeof(Set));
    return new_node;
}

void appendTerm(Set **list, int data){

    Set *new_node =get_node();
    new_node->data = data;
    new_node->next = NULL;
    if (*list == NULL){
        *list = new_node;
    }
    else{
        Set *cur = *list;
        while (cur->next != NULL){
            cur = cur->next;
        }
        cur->next = new_node;
    }
}

void printSet(Set *list){
    Set * cur = list;
    while (cur->next != NULL){
        printf(" %d", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int compare(Set *A, Set *result){
    Set *pA = A;
    Set *pB = result;
    int i=0, j=0;
    while ( pA->next != NULL){
        pA = pA->next;
        i++;
    }
    while ( pB->next != NULL){
        pB = pB->next;
        j++;
    }
    if (i==j) return 1;
    else return 0;
}


void subset(Set *A, Set *B){
    Set *pA = A;
    Set *pB = B;
    Set *result = NULL;

    while (pA && pB){
        if (pA->data > pB->data){
            pB = pB->next;
        }
        else if(pA->data < pB->data){
            printf("%d", pA->data);
            return ;
        }
        else{
            appendTerm(&result, pA->data);
            pA = pA->next;
            pB = pB->next;
        }
    }
    if (compare(A, result)==1) printf("0");
    else printf("%d", pA->data);
}



int main(void){
    int numA, numB, input;
    int i;
    Set *A = NULL;
    Set *B = NULL;

    scanf("%d", &numA);

    for(i=0; i<numA; i++){
        scanf("%d", &input);
        appendTerm(&A, input);
    }

    scanf("%d", &numB);

    for(i=0; i<numB; i++){
        scanf("%d", &input);
        appendTerm(&B, input);
    }

    if (numA==0 && numB==0){
        printf("0");
        return ;
    }
    else if(numA==0 && numB!=0){
        printf("0");
        return ;
    }
    else if(numA!=0 && numB==0){
        printf("%d\n", A->data);
    }
    else{
        subset(A, B);
    }

    return 0;
}