#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE    50

typedef struct Node{
    int data;
    struct Node * next;
}Node;

typedef struct List{
    Node *head;
    int size;
}List;

void insert_node(List *list, int data){
    int i=0;

    Node *cur = list->head;
    Node *new_node = (Node *)malloc(sizeof(Node)); // 새 노드 생성
    new_node -> data = data; // p->data, p->next 중에서 data는 이미 저장할 수 있다.

    if(list->head==NULL){ // 헤드가 비어있을 때
        list->head = new_node;
        list->size++;
    }   
    else{ // 헤드가 비어있지 않을 때
        if(list->size == 1){ // 데이터 크기가 1인 경우 고려
            if ( data < cur -> data){ // 새로 삽입 되는 데이터가 더 작은 경우 맨 앞에 삽입
                new_node -> next = cur; // 헤드는 다음 노드를 가리키고 있는 상태
                list -> head = new_node; // 헤드를 교체해줌.
                list -> size++;
                return ;
            }
            else { // 새로 삽입되는 데이터가 더 큰 경우 뒤에 삽입
                new_node -> next = NULL;
                cur -> next = new_node;
                list -> size++;
                return ;
            }
        }
        else{ // 데이터 크기가 1이 아닌 경우 (즉, 2이상인 경우)
            if ( data < (cur->data) ){ // 만약 헤드보다 작다면 그냥 맨 앞에 삽입해주면 끝
                new_node -> next = cur;
                list -> head = new_node;
                list -> size++;
                return ;
            }

            for(i=0; i<list->size-1; i++){// 만약 헤드가 가리키는 값보다 크다면, 대소비교 실시
                if (data >= cur->data && data < cur->next->data){
                    new_node->next = cur->next;
                    cur -> next = new_node;
                    list -> size++;
                    return ;
                }
                else{
                    cur = cur->next;
                }
            }
            cur -> next = new_node;
            list -> size++;
        }
    }
}

void display(List list){
    int i = 0;
    Node *p = list.head;
    for(i=0; i<list.size; i++){
        printf(" %d", p->data);
        p = p->next;
    }
    printf("\n");
}
int main(void){
    List list;
    list.size = 0;

    int num;
    int i;
    int data;
    
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &data);
        if (i >= MAX_SIZE){
            printf("Error. Full Exception.\n");
            display(list);
            break;
        }
        else{
            insert_node(&list, data);
            if ((i+1)%3==0)
                display(list);
            if (i+1==num)
                display(list);
        }
    }
    return 0;
}