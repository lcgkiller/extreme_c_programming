#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __Node{
	char elem;
	struct Node * prev;
	struct Node * next;
}Node;

Node * getnode(){ // Node�� �����͸� ��ȯ
	Node * node;
	// node = (Node *)malloc(sizeof(Node)) // malloc�� ����ϴ� ��� heap�� �����Ǿ� ���� ���� ���ɼ�
	                                                        // memset�� ����ϴ� ���� ���� 
	node = (Node *)calloc(1, sizeof(Node)); // malloc�� �ϸ鼭 clear�� �ǽ�
	return node;
}

void initList(Node ** head, Node ** tail){ // initList(&head, &tail)
	*head = getnode();
	*tail = getnode();
	(*head)->next = *tail;
    (*head)->prev = *tail;
    (*tail)->next = *tail;
	(*tail)->prev = *head;

}


int main(void){
	Node * head;
	Node * tail;
	char input;
	int num_of_operation;

	scanf("%d", &num_of_operation);
	getchar();

	initList(

	scanf("
	return 0;
}