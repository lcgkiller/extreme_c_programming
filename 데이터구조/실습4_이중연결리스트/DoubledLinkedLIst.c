#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __Node{
	char elem;
	struct Node * prev;
	struct Node * next;
}Node;

Node * getnode(){ // Node의 포인터를 반환
	Node * node;
	// node = (Node *)malloc(sizeof(Node)) // malloc을 사용하는 경우 heap이 정리되어 있지 않을 가능성
	                                                        // memset을 사용하는 것이 좋음 
	node = (Node *)calloc(1, sizeof(Node)); // malloc을 하면서 clear를 실시
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