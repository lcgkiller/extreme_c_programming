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

int compare(Set *A, Set *C){
    int i=0, j=0;
    Set *pA = A;
    Set *pC = C;

    while(pA->next!=NULL){
        pA = pA->next;
        i++;
    }
    while(pC->next!=NULL){
        pC = pC->next;
        j++;
    }
    if (i==j) return 1;
    else return 0;
}

void AppendNode(Set **list, int data){
    Set *new_node = get_node();
    Set *cur = *list;
    new_node->data = data;
    new_node->next = NULL;
    if ( cur == NULL ){
        // cur = new_node; //실수한 부분
        // 위와 같이 작성하면 main함수에서 
        // (1) AppendNode(&setA, data)을 호출하고
        // (2) PrintSet(SetA) 했을 때 SetA를 가리키는 포인터 값이 변경되지 않는다는 문제점이 있다.
        // (3) 잘못된 출력결과
        //     *setA : 0
        //     *setB : 0
        // 더블포인터로 받았기 때문에 포인터값을 call by reference로 변경해준다.
        *list = new_node;
        
        // (4) 정상적인 출력결과
        //     *setA : 44897864
        //     *setB : 44897912
    }
    else{
        while (cur->next != NULL){
            cur = cur->next;
        }
        cur->next = new_node;
    }
}

void PrintSet(Set *list){
    Set *cur = list;
    while (cur->next != NULL){
        printf(" %d", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

void subset(Set *A, Set *B){
    Set *pA = A;
    Set *pB = B;
    Set * C = NULL;

    while (pA && pB){
        if (pA->data > pB->data){
            pB = pB->next;
        }
        else if(pA->data < pB->data){
            printf("%d", pA->data); // 놓치기 쉬운 부분
            return; 
            // pA = pA->next;
        }
        else if(pA->data == pB->data){
            AppendNode(&C, pA->data);
            pA = pA->next;
            pB = pB->next;
        }
    }
    if (compare(A, C) == 1) printf("%d", 0);
    else printf("%d\n", pA->data);
}




int main(void){
    int numA, numB, input;
    int i=0;
    Set * setA = NULL;
    Set * setB = NULL;

    scanf("%d", &numA);

    for(i=0; i<numA; i++){
        scanf("%d", &input);
        AppendNode(&setA, input);
    }

    scanf("%d", &numB);
    
    for(i=0; i<numB; i++){
        scanf("%d", &input);
        AppendNode(&setB, input);
    }

    if (setA == 0 && setB == 0){ // A, B가 공집합인 경우 
        printf("%d", 0);
        return ;
    }
    else if(setA != 0 && setB ==0){
        printf("%d", setA->data);
        return ;
    }
    else if(setA == 0 && setB !=0){
        printf("%d", 0);
        return ;
    }
    else{
        subset(setA, setB);
    }
    return 0;
}