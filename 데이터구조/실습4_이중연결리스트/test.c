#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
add(list position, item) : list�� position��°�� item�� �߰��Ѵ�.
delete(list, position) : list�� position��° ��ġ�� item�� �����Ѵ�
get_entry(list, position) : list�� position��° ��ġ�� item ���� ����
print(list) : list�� ��� item�� list�� ����� ������� ������� ����Ѵ�
*/

typedef struct __Node{
	char elem; // ����
    Node * next; // ���� ��带 ����Ű�� ������ (����ü __Node�� ������ ���� ����)
	Node * prev; // ���� ��带 ����Ű�� ������ (����ü __Node�� ������ ���� ����)
}Node;

typedef struct __ArrayList{
    Node * head; // ����Ʈ�� ���� ��带 ����Ű�� ������
    Node * tail; // ����Ʈ�� ���κ��� ����Ű�� ������
}List;

Node * getNode(Node){ // Node�� �����͸� ��ȯ
	Node * node = (Node *)calloc(1, sizeof(Node)); // malloc�� �ϸ鼭 clear�� �ǽ�

    /* malloc�� ����ϴ� ��� heap�� �����Ǿ� ���� ���� ���ɼ� => memset�� ����ϴ� ���� ����  
	node = (Node *)malloc(sizeof(Node))
    */
	return node;
}

// �ʱ�ȭ
List *initList(List *list){
    Node *head = getNode();
    Node *tail = getNode();

    head -> next = tail;
    tail -> prev = head;
    list->head=head;
    list->tail=tail;

    return list;
}

void add(Node * list, int position, char elem){
    Node * p = list.head
}


int main(void){
	List *list;
    list=initList(list);
    
    add(list, 1, 'A');

    for(i=0; i<1; i++){
        list[i];
    }
    
	return 0;
}