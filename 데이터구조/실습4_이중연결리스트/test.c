#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct __Node{
	char elem; // ����
    struct __Node * next; // ���� ��带 ����Ű�� ������
	struct __Node * prev; // ���� ��带 ����Ű�� ������
}Node;

typedef struct __List{
    Node * head;
    Node * tail;
}List;

Node * getNode(){ // Node�� �����͸� ��ȯ
	Node * new_node = (Node *)calloc(1, sizeof(Node)); // malloc�� �ϸ鼭 clear�� �ǽ�

	return new_node;
}

// �ʱ�ȭ
List *initList(List *list){
    Node *head = getNode();
    Node *tail = getNode();

    (*head).next = tail;
    (*tail).prev = head;
    // list->head=head; �� ����� ����
    // list->tail=tail; �� ����� ����

    return list;
}

// Add
void add(List *head, List *tail, int num_location, char data){
    Node * new = getNode();
    int i;
    printf("############# hi\n");
    Node *p, *q; // �Ű����� head�� tail �ּҰ��� ����
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