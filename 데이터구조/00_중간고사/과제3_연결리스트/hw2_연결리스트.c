#include <stdio.h>
#include <stdlib.h>

typedef struct Node{ // 노드 구조체
    int data;
    struct Node * next;
}Node;

typedef struct List{ // 노드를 관리하기 위한 list
    Node *head;
    int size;
}List;

void initList(List *list){  // 리스트 초기화
    list -> size = 0;
    list -> head = NULL;
}

void insert_node(List *list, int data){ // 원소 삽입 함수
    int i=0;

    Node *cur = list->head; // list의 head 부분을 cur 변수에 저장
    Node *new_node = (Node *)malloc(sizeof(Node)); // 새 노드 생성
    new_node -> data = data; // p->data, p->next 중에서 data는 이미 저장할 수 있다.

    if(list->head==NULL){ // 헤드가 비어있을 때
        list->head = new_node;
        list->size++;
    }   
    else{ // 헤드가 비어있지 않을 때
        if(list->size == 1){ // 데이터 크기가 1인 경우 고려
            if ( data < cur->data){ // 새로 삽입 되는 element가 더 작은 경우 맨 앞에 삽입
                new_node -> next = cur; // (새로 삽입되는 노드) -> (new_node->next) -> (이전에 있던 노드)
                list -> head = new_node; // 헤드를 교체해줌.
                list -> size++;
                return ;
            }
            else { // 새로 삽입되는 데이터가 더 큰 경우 뒤에 삽입
                cur -> next = new_node; // (이전에 있던 노드) -> (cur->next) -> (새로 삽입되는 노드)
                list -> size++;
                return ;
            }
            // cur -> next = new_node;
            // list -> size++;
        }
        else{ // 데이터 크기가 1이 아닌 경우 (즉, 2이상인 경우)
            if ( data < (cur->data) ){ // 만약 헤드보다 작다면 그냥 맨 앞에 삽입해주면 끝
                new_node -> next = cur;   //  (새 노드) -> (new_node->next) -> (노드1) - (노드2) - ... - (노드 n)
                list -> head = new_node;  //  새 노드로 헤드 교체
                list -> size++;
                return ;
            }

            for(i=0; i<list->size-1; i++){// 만약 헤드가 가리키는 값보다 크다면, 대소비교 실시
                if (data >= cur->data && data < cur->next->data){ // (prev_data) <= (input_data) < (next_data)
                    new_node->next = cur->next;
                    cur -> next = new_node;
                    list -> size++;
                    return ;
                }
                else{
                    cur = cur->next; // 자기 자리를 찾을 때까지 계속 전진
                }
            }
            cur -> next = new_node;
            list -> size++;
        }
    }
    
}

void display(List list){
    int i = 1;
    Node *p = list.head;
    for(i=0; i<list.size; i++){
        printf(" %d", p->data);
        p = p->next;
    }
    printf("\n");
}
int main(void){
    List list;
    int num;
    int i;
    int data;
    int test;
    initList(&list);
    
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &data);
        insert_node(&list, data);
        if ((i+1)%3==0)
            display(list);
        if (i+1==num)
            display(list);
    }
    return 0;
}
