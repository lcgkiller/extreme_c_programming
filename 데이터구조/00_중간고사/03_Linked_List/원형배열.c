#include <stdio.h>
#define MAX_SIZE    10

typedef struct Queue{
    int buf[MAX_SIZE];
    int front;
    int rear;  
}Queue;

int size(Queue *queue){
    return (MAX_SIZE + queue->rear - queue->front + 1);
}

int elemAtRank(Queue * queue, int rank){
    if (rank < 0 || rank>=size(queue)){
        printf("invalid Rank Exception\n");
        return 0;
    }
    return queue->buf[(queue->front + queue->rear) % MAX_SIZE];
}
void initQueue(Queue * queue){
    queue->front = queue->rear = 0;
}

void insertAtRank(Queue * queue, int rank, int elem){
    printf("%d %d\n", rank, elem);
    int queue_size = size(queue);
    int i=0;

    if (queue_size==MAX_SIZE-1){
        printf("Full List Exception\n");
        return ;
    }
    if (rank<0 || rank>queue_size){
        printf("Invalid Rank Exception\n");
    }

    if (rank < MAX_SIZE/2){
        for(i=queue->front; i<(queue->front + queue->rear - 1) % MAX_SIZE; i++){
            queue->buf[(i-1) % MAX_SIZE] = queue->buf[i];
        }
        queue->buf[(queue->front+queue->rear-1) % MAX_SIZE] = elem;
        queue->front = (queue->front-1) % MAX_SIZE;
    }
    else{
        for(i=queue->rear; i>=(queue->front+queue->rear) % MAX_SIZE; i--){
            queue->buf[i+1 % MAX_SIZE] = queue->buf[i];
        }
        queue->buf[(queue->front + queue->rear) % MAX_SIZE] = elem;
        queue->rear = (queue->rear) % MAX_SIZE;
    }
}

// void removeAtRank(Queue * queue){

// }

void printQueue(Queue *queue){
    int queue_size = size(queue);
    int i;
    printf("출력 결과 : ");
    for(i = queue->front; i == queue->rear; i++){
        printf("%d", queue->buf[i]);
    }
    printf("\n");
}


int main(void){
    int i;
    Queue queue;
    int rank, elem;
    int num;

    initQueue(&queue);

    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d %d", &rank, &elem);
        insertAtRank(&queue, rank, elem);
    }

    printQueue(&queue);

}