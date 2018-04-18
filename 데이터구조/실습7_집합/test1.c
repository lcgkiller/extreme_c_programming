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

int compare(Set *listA, Set *resultList){
    Set *pA = listA;
    Set *result = resultList;
    int i=0, j=0;

    while(pA->next != NULL){
        i++;
        pA = pA->next;
    }

    while(result->next != NULL){
        j++;
        result = result->next;
    }

    if (i==j) return 1;
    else return 0;

}
void appentTerm(Set **list, int data){
    Set *new_node =get_node();
    new_node->data = data;
    new_node->next = NULL;

    if (*list == NULL){
        *list = new_node;
    }
    else{
        Set * cur = *list;
        while(cur->next != NULL){
            cur = cur->next;
        }
        cur->next = new_node;
    }
}

void subset(Set *listA, Set *listB){
    Set *pA = listA;
    Set *pB = listB;
    Set *result = NULL;

    while(pA && pB){
        if (pA->data > pB->data){
            pB = pB->next;
        }

        else if(pA->data < pB->data){
            printf("%d", pA->data);
            return ;
        }

        else if (pA->data == pB->data){
            appentTerm(&result, pA->data);
            pA = pA->next;
            pB = pB->next;
        }
    }

    if (compare(listA, result)== 1) printf("0");
    else printf("%d\n", pA->data);
}


void printSet(Set *list){
    Set * cur = list;
    while(cur != NULL){
        printf(" %d", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main(void){
    int numA, numB;
    int i;
    int input;

    Set *A = NULL;
    Set *B = NULL;

    scanf("%d", &numA);
    
    for(i=0; i<numA; i++){
        scanf("%d", &input);
        appentTerm(&A, input);
    }

    scanf("%d", &numB);

    for(i=0; i<numB; i++){
        scanf("%d", &input);
        appentTerm(&B, input);
    }

    if (numA == 0 && numB == 0 ){
        printf("0");
        return ;
    }
    else if(numA == 0 && numB != 0){
        printf("0");
        return ;
    }
    else if(numA != 0 && numB == 0){
        printf("%d", A->data);
        return ;
    }
    else{
        subset(A, B);
    }
    return 0;
}


