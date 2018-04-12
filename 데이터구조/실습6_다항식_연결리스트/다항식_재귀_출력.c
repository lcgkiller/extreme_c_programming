#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int coef;              // 계수
    int exponent;          // 차수
    struct Node * next;    // 다음 노드
}Node;

typedef struct List{
    int length;
    int size;
    Node * header;
    Node * last;
}List;

Node * getNode(){
    Node * new_node = (Node *)malloc(sizeof(Node));
    return new_node;
}

void initList(List * list){
    list -> length = 0;
    list -> header = NULL;
    list -> last = NULL;
}


Node * appendTerm(List * list, int coef, int exponent){
    Node * new_node = getNode();
    new_node -> coef = coef;
    new_node -> exponent = exponent;
    new_node -> next = NULL;

    if (list->header == NULL){ // 헤드가 NULL일 경우
        list->header = new_node;
        list->last = new_node;
        list->length++;
    }
    else{ // 헤드가 NULL이 아닐 경우
        list -> last -> next = new_node; // 최근 last의 노드값을 새 노드로 link
        list -> last = new_node; // last를 교체
        list -> length++;
    }
}

List addPoly(List *listA, List *listB){
    List new_list; // 새로운 결과값 저장하는 리스트
    initList(&new_list);

    Node * i = listA->header;
    Node * j = listB->header;
    
    while ((i != NULL) && (j != NULL)){
        if (i->exponent > j->exponent){
            appendTerm(&new_list, i->coef, i->exponent);
            i = i -> next;
        }
        else if (i->exponent < j->exponent){
            appendTerm(&new_list, j->coef, j->exponent);
            j = j -> next;
        }
        else{
            int sum = (i->coef) + (j->coef);
            if (sum !=0){
                appendTerm(&new_list, sum, i->exponent);
            }
            i = i->next;
            j = j->next;
        }
    }
    while (i != NULL){
        appendTerm(&new_list, i->coef, i->exponent);
        i = i->next;
    }
    while (j != NULL){
        appendTerm(&new_list, j->coef, j->exponent);
        j = j->next;
    }

    return new_list;
}

void printList(List * list){
    // Node * cur = list -> header -> next; (실수)한칸이 계속 짤려서 나왔던 점
    Node * cur = list -> header;
    while ( cur != NULL ){
        printf(" %d %d", cur->coef, cur->exponent);
        cur = cur->next;
    }
}

void reversePrintList(List * list, Node *cur){
    // printf("@@@@@@@@ cur : %d\n", cur);
    // printf("@@@@@@@@ cur->next : %d\n", cur->next );

    Node * head;

    if ( cur->next == NULL){
        printf(" %d %d", cur->coef, cur->exponent);
        head = cur;
        return ;
    }
    else{
        printf(" %d %d", cur->coef, cur->exponent);
        cur = cur->next;
        reversePrintList(list, cur);    
    }
}
int main(void){

    int x; // 첫 번째 다항식의 개수
    int y; // 두 번째 다항식의 개수
    int i;

    int coef;
    int exponent;

    List listA;
    List listB;
    List result_list;
    Node *cur;

    initList(&listA); // List A 초기화
    initList(&listB); // List B 초기화

    scanf("%d", &x);
    
    for(i=0; i<x; i++){
        scanf("%d %d", &coef, &exponent);
        appendTerm(&listA, coef, exponent);
    }

    scanf("%d", &y);
    
    for(i=0; i<y; i++){
        scanf("%d %d", &coef, &exponent);
        appendTerm(&listB, coef, exponent);
    }

    result_list = addPoly(&listA, &listB);
    cur = result_list.header;
    // printList(&result_list);
    reversePrintList(&result_list, cur);
    
    return 0;
}