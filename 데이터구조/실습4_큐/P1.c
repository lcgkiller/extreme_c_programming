#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
    int front;
    int rear;
    int * arr;
    int size;
}Queue;

Queue * createQueue(int size){
    Queue *createdQueue;
    createdQueue = (Queue *)malloc(sizeof(Queue));
    createdQueue -> arr = (int *)malloc(sizeof(int));
    createdQueue -> front = 0;
    createdQueue -> rear = 0;
    createdQueue -> size = size;
    return createdQueue;
}

void print(Queue *q){
    int i;
    for(i=0; i<q->size; i++){
        printf(" %d", q->arr[i]);
    }
    printf("\n");
}

int isFull(Queue * q){
    int N = q->size;
    if ( (q->rear + 1) % N == q->front )
        return 1;
    return 0;
}

int isEmpty(Queue * q){
    if (q->front == q->rear)
        return 1;
    return 0;
}

void insert(Queue *q, int data){
    int N = q->size;
    if (isFull(q)){ // Full이 아니라면 data 삽입
        printf("overflow");
        print(q);
        exit(1);
    }
    q->rear = (q->rear + 1) % N;
    q->arr[q->rear] = data;
    // print(q);
}

int delete(Queue *q){
    int N = q->size;
    if (isEmpty(q)){
        printf("underflow");
        exit(1);
    }
    q->front = (q->front+1) % N;
    q->arr[q->front] = 0;
    return q->arr[q->front];
}

int main(void){
    int size;
    int i;
    char cmd;
    int data;
    
    scanf("%d", &size);  
    Queue *q = createQueue(size);

    for(i=0; i<size; i++){
        q->arr[i] = 0;
    }

    int n; // 연산의 개수
    scanf("%d", &n); // 연산회수
    
    for(i=0; i<n; i++){
        getchar();
        scanf("%c", &cmd);
        switch(cmd){
            case 'I':
                scanf("%d", &data);
                insert(q, data);
                break;
            case 'D':
                delete(q);
                break;

            case 'P':
                print(q);
                break;
        }
    }

    return 0;
}