#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
}Node;

Node * get_node(){
    Node * new_node = (Node *)malloc(sizeof(Node));
    return new_node;
}

void insertNode(Node *head, int pos, int data){
    Node *new_node = get_node();
    Node *p = head;
    int i=0;
    for(i=0; i<pos; i++){
        p = p->next;
    }
    p->next = new_node;
    new_node->data = data;
    new_node->next = NULL;

}
void print(Node *head){
    Node *p = head->next;
    while (p != NULL){
        printf(" %d", p->data);
        p = p->next;
    }
    printf("\n");
}
int compare(Node *A, Node *C)
{
	Node *pA = A->next;
	Node *pC = C->next;

	int i = 0, j = 0;

	for (;pA;pA = pA->next) i++;
	for (;pC;pC = pC->next) j++;

	if (i == j) return 1;
	else return 0;
}

void subset(Node *pheadA, Node *pheadB){
    Node *pA = pheadA->next;
    Node *pB = pheadB->next;
    Node *new_list = get_node();

    int i=0;
    while (pA && pB){
        if (pA->data > pB->data){
            pB = pB->next;
        }
        else if (pA->data < pB->data){
            pA = pA->next;
        }
        else if (pA->data == pB->data){
            insertNode(new_list, i++, pA->data); // pB에 있으면 새 집합 리스트에 원소 더하기
            pA = pA->next;
            pB = pB->next;
        }
    }

    if (compare(pheadA, new_list) == 1) printf("%d", 0); // 집합 B에 속하지 않는 가장 작은 원소 출력
	else printf("%d", pA->data);
}

int main(void){
    int numA, numB;
    int i;
    int data;

    Node *A = get_node();
    Node *B = get_node();

    // 집합 A
    scanf("%d", &numA);

    for(i=0; i<numA; i++){
        scanf("%d", &data);
        insertNode(A, i, data);
    }

    // 집합 B
    scanf("%d", &numB);

    for(i=0; i<numB; i++){
        scanf("%d", &data);
        insertNode(B, i, data);
    }
    subset(A, B);

    return 0;
}