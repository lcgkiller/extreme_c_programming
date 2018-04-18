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
        // cur = new_node; //�Ǽ��� �κ�
        // ���� ���� �ۼ��ϸ� main�Լ����� 
        // (1) AppendNode(&setA, data)�� ȣ���ϰ�
        // (2) PrintSet(SetA) ���� �� SetA�� ����Ű�� ������ ���� ������� �ʴ´ٴ� �������� �ִ�.
        // (3) �߸��� ��°��
        //     *setA : 0
        //     *setB : 0
        // ���������ͷ� �޾ұ� ������ �����Ͱ��� call by reference�� �������ش�.
        *list = new_node;
        
        // (4) �������� ��°��
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
            printf("%d", pA->data); // ��ġ�� ���� �κ�
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

    if (setA == 0 && setB == 0){ // A, B�� �������� ��� 
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