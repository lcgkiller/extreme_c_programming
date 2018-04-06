#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct __Node{
	char elem; // 원소
    struct __Node * next; // 다음 노드를 가리키는 포인터
	struct __Node * prev; // 이전 노드를 가리키는 포인터
}Node;

typedef struct __List{
    Node * head;
    Node * tail;
}List;

Node * getNode(){ // Node의 포인터를 반환
	Node * new_node = (Node *)calloc(1, sizeof(Node)); // malloc을 하면서 clear를 실시

	return new_node;
}

// 초기화
List *initList(List *list){
    Node *head = getNode();
    Node *tail = getNode();

    (*head).next = tail;
    (*tail).prev = head;
    // list->head=head; 이 방법도 가능
    // list->tail=tail; 이 방법도 가능

    return list;
}

// Add
void add(List *head, List *tail, int num_location, char data){
    Node * new = getNode();
    int i;
    printf("############# hi\n");
    Node *p, *q; // 매개변수 head와 tail 주소값을 저장
    p = head;
    for(i=0; i<num_location-1; i++){
        p = p->next;
        printf("@@@@@@@@@@@ %d\n", *p);
        if(p==tail){
            printf("Invalid Position\n");
            return;
        }
    }
}
int main(void){
	List *list;
    list=initList(list);

    int position;
    char item;

    scanf("%d %c", &position, &item);
    add(&list->head, &list->tail, position, item);    
	return 0;
}