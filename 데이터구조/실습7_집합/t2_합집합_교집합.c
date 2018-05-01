#include <stdio.h>
#include <stdlib.h>

typedef struct Set{
    int data;
    struct Set * next;
}Set;

Set * get_node(){
    Set * new_node = (Set *)malloc(sizeof(Set));
    new_node -> next = NULL; // 이 부분이 포인트
    return new_node;
}

void AppendNode(Set *header, int data){
    Set *new_node = get_node();
    new_node->data = data;
    new_node->next = NULL;
    if (header->next == NULL){
        header->next = new_node;
    }
    else{
        Set * cur = header->next;
        while ( cur->next != NULL ){
            cur = cur->next;
        }
        cur->next = new_node;
    }
}

Set * unionSet(Set *A, Set *B){
    Set *pA = A->next;
    Set *pB = B->next;
    Set *result = get_node();

    while (pA !=NULL && pB != NULL){
        if (pA->data > pB->data){
            AppendNode(result, pB->data);
            pB = pB->next;
        }
        else if (pA->data < pB->data){
            AppendNode(result, pA->data);
            pA = pA->next;
        }
        else if (pA->data == pB->data){
            AppendNode(result, pA->data);
            pA = pA->next;
            pB = pB->next;
        }
    }
    while ( pA != NULL ){
        AppendNode(result, pA->data);
        pA = pA->next;
    }
    while ( pB != NULL ){
        AppendNode(result, pB->data);
        pB = pB->next;
    }

    return result;
}

Set * intersectSet(Set *A, Set *B){
    Set *pA = A->next;
    Set *pB = B->next;
    Set *result = get_node();

    while (pA && pB){
        if (pA->data > pB->data){
            pB = pB->next;
        }
        else if (pA->data < pB->data){
            pA = pA->next;
        }
        else if (pA->data == pB->data){
            AppendNode(result, pA->data);
            pA = pA->next;
            pB = pB->next;
        }
    }
    return result;
}

Set * subtractSet(Set *A, Set *B){
    Set *pA = A->next;
    Set *pB = B->next;
    Set *result = get_node();

    while (pA && pB){
        if (pA->data > pB->data){
            AppendNode(result, pA->data);
            pA = pA->next; // 이걸 추가해줘야 한다.
            pB = pB->next;
        }
        else if (pA->data < pB->data){
            AppendNode(result, pA->data);
            pA = pA->next;
        }
        else if (pA->data == pB->data){
            pA = pA->next;
            pB = pB->next;
        }
    }

    while(pA != NULL){
        AppendNode(result, pA->data);
        pA = pA->next;
    }
    return result;
}

void PrintSet(Set *header){
    Set *cur = header->next;
    while (cur != NULL){
        printf(" %d", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main(void){
    int numA, numB, input;
    int i=0;

    Set * setA = get_node();
    Set * setB = get_node();
    Set * resultA = get_node();
    Set * resultB = get_node();
    Set * resultSubset = NULL;

    scanf("%d", &numA);

    for(i=0; i<numA; i++){
        scanf("%d", &input);
        AppendNode(setA, input);
    }

    scanf("%d", &numB);
    
    for(i=0; i<numB; i++){
        scanf("%d", &input);
        AppendNode(setB, input);
    }

    if (numA == 0 && numB == 0){
        printf(" 0\n 0");
    }
    else if (numA == 0 && numB != 0){
        PrintSet(setB);
        printf(" 0");
    }
    else if (numA !=0 && numB == 0){
        PrintSet(setA);
        printf(" 0");
    }
    else{
        resultA = unionSet(setA, setB);
        resultB = intersectSet(setA, setB);
        PrintSet(resultA);
        if (resultB == 0){
            printf(" 0");
        }
        else {
            PrintSet(resultB);
        }
    }
    printf("====차집합===\n");
    resultSubset =  subtractSet(setA, setB);
    PrintSet(resultSubset);

    return 0;
}