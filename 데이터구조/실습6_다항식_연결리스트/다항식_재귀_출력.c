#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int coef;              // ���
    int exponent;          // ����
    struct Node * next;    // ���� ���
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

    if (list->header == NULL){ // ��尡 NULL�� ���
        list->header = new_node;
        list->last = new_node;
        list->length++;
    }
    else{ // ��尡 NULL�� �ƴ� ���
        list -> last -> next = new_node; // �ֱ� last�� ��尪�� �� ���� link
        list -> last = new_node; // last�� ��ü
        list -> length++;
    }
}

List addPoly(List *listA, List *listB){
    List new_list; // ���ο� ����� �����ϴ� ����Ʈ
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
    // Node * cur = list -> header -> next; (�Ǽ�)��ĭ�� ��� ©���� ���Դ� ��
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

    int x; // ù ��° ���׽��� ����
    int y; // �� ��° ���׽��� ����
    int i;

    int coef;
    int exponent;

    List listA;
    List listB;
    List result_list;
    Node *cur;

    initList(&listA); // List A �ʱ�ȭ
    initList(&listB); // List B �ʱ�ȭ

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