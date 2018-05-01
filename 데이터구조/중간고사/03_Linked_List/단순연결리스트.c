#include <stdio.h>
#include <stdlib.h>


typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode *link;
}ListNode;

void error(char *msg){
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
void insert_node(ListNode **phead, ListNode *p, ListNode *new_node){
    if(*phead == NULL){
        new_node->link = NULL;
        *phead = new_node;
    }
    else if (p==NULL){
        new_node -> link = *phead;
        *phead = new_node;
    }
    else{
        new_node -> link = p->link;
        p->link = new_node;
    }
}

void remove_node(ListNode **phead, ListNode *p, ListNode *removed){
    if (p==NULL){ // 선행 노드 p가 NULL인 경우 : 첫 번째 노드 삭제, 헤드 포인터(phead)를 변경하고, removed 노드가 차지하고 있는 공간을 반환한다.
        *phead = (*phead) -> link;
    }
    else{ // 선행노드 p가 NULL이 아닌 경우
        p->link = removed -> link;
    }
    free(removed);
}

void display(ListNode *head){
    ListNode *p = head;
    while (p!=NULL){
        printf("%d-> ", p->data);
        p = p->link;
    }
    printf("\n");
}

ListNode *search(ListNode *head, int x){
    ListNode *p;
    p = head;
    while(p!=NULL){
        if(p->data == x) 
            return p;
        p = p->link;
    }
    return p;
}

ListNode *concat(ListNode *head1, ListNode *head2){
    ListNode *p;
    if (head1 == NULL) return head2;
    else if(head2==NULL) return head1;
    else{
        p = head1;
        while(p->link != NULL)
            p=p->link;
        p->link = head2;
        return head1;
    }
}

/* 리스트를 역순으로 만드는 연산
p : 아직 처리되지 않은 노드
q : 현재 역순으로 만들 노드
r : 이미 역순으로 변경된 노드
r은 q, q는 p를 차례로 따라간다.
*/

ListNode *reverse(ListNode *head){
    ListNode *p, *q, *r;
    p = head;
    q = NULL;

    while(p!=NULL){
        r = q;
        q = p;
        p = p->link;
        q->link = r; // q의 링크 방향을 바꾼다.
    }
    return q; // q는 역순으로 된 리스트의 헤드 포인터
}

// 노드 동적 할당 생성
ListNode *create_node(element data, ListNode *link){
    ListNode *new_node;
    new_node = (ListNode *)malloc(sizeof(ListNode));
    if(new_node == NULL) error("메모리 할당 에러");
    new_node->data = data;
    new_node->link = link;
    
    return new_node;
}

int main(void){
    ListNode *list1=NULL, *list2=NULL;
    ListNode *p;

    int input;
    int data;
    int i;

    scanf("%d", &input); // 정수의 개수
    
    for(i=0; i<input; i++){
        scanf("%d", &data);
        insert_node(&list1, NULL, create_node(data, NULL));
    }
    display(list1);
    // list1 = 30 -> 20 -> 10
    // insert_node(&list1, NULL, create_node(10, NULL));
    // insert_node(&list1, NULL, create_node(20, NULL));
    // insert_node(&list1, NULL, create_node(30, NULL));
    // display(list1);

    // list = 20->10
    // remove_node(&list1, NULL, list1);
    // display(list1);

    // list2 = 80->70->60
    // insert_node(&list2, NULL, create_node(60, NULL));
    // insert_node(&list2, NULL, create_node(70, NULL));
    // insert_node(&list2, NULL, create_node(80, NULL));
    // display(list2);

    // list1 = concat(list1, list2);
    // display(list1);

    // list1을 역순으로
    // list1 = reverse(list1);
    // display(list1);

    // list1에서 20 탐색
    // p = search(list1, 20);
    // printf("탐색성공 : %d\n", p->data);

    return 0;
}