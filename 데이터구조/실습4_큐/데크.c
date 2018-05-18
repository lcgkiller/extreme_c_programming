#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	struct Node * prev;
	struct Node * next;
	int data;
}Node;

typedef struct Deque {
	Node * front;
	Node * rear;
}Deque;

void initDeque(Deque *dq) {
	dq->front = NULL;
	dq->rear = NULL;
}

Node * getNode() {
	Node * new_node = (Node *)malloc(sizeof(Node));
	return new_node;
}

void print(Deque *q) {
    int i;
    Node * cur = q->front;
    while(cur){
        printf(" %d", cur->data);
        cur = cur->next;
    }
	printf("\n");
}

int isEmpty(Deque *q){
    if (q->front == NULL && q->rear == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void add_front(Deque *q, int data) {
	Node * new_node = getNode();
	new_node->data = data;

	if (q->front == NULL) {
		q->rear = new_node;
        q->front = new_node;
        new_node->next = NULL;
        new_node->prev = NULL;
	}
	else {
		q->front->prev = new_node;
        new_node->next = q->front;
        new_node->prev = NULL;
        q->front = new_node;
	}
	// print(q);
}

void add_rear(Deque *q, int data) {
	Node * new_node = getNode();
	new_node->data = data;

	if (q->rear == NULL) {
		q->rear = new_node;
        q->front = new_node;
	}
	else {
        q->rear->next = new_node;
		new_node->prev = q->rear;
		new_node->next = NULL;
		q->rear = new_node;
	}
	// print(q);
}

int delete_front(Deque *q) {
	Node * cur_front = q->front;
    if(isEmpty(q)){
        printf("underflow\n");
        exit(1);
    }
	else{
		int temp = cur_front->data;
		if(q->front->next == NULL){
			q->front = NULL;
			q->rear = NULL;
		}
		else{
			q->front = q->front->next;
			q->front->prev = NULL;
			free(cur_front);
			return temp;
		}
	}
}

int delete_rear(Deque *q) {
    Node * cur_rear = q->rear;
    if(isEmpty(q)){
        printf("underflow\n");
        exit(1);
    }
	else{
		int temp = q->rear->data;
		
		if(q->rear->prev == NULL){
			q->front = NULL;
			q->rear = NULL;
		}
		else{
			q->rear = cur_rear->prev;
			q->rear->next = NULL;
		}
		free(cur_rear);
		return temp;
	}
}

int main(void) {
	Deque *q = (Deque *)malloc(sizeof(Deque));
	initDeque(q);

	int num;
	char cmd[3];
	int i = 0;
	int data;

	scanf("%d", &num);
	for (i = 0; i<num; i++) {
		scanf("%s", &cmd);
		if (strcmp(cmd, "AF") == 0) {
			scanf("%d", &data);
			add_front(q, data);
		}
		else if (strcmp(cmd, "AR") == 0) {
			scanf("%d", &data);
			add_rear(q, data);
		}
		else if (strcmp(cmd, "DF") == 0) {
			delete_front(q);
		}
		else if (strcmp(cmd, "DR") == 0) {
			delete_rear(q);
		}
		else if (strcmp(cmd, "P") == 0) {
			print(q);
		}
	}

	return 0;
}