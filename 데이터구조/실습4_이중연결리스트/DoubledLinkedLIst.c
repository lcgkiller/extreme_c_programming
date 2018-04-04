#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
add(list position, item) : list의 position번째에 item을 추가한다.
delete(list, position) : list의 position번째 위치한 item을 삭제한다
get_entry(list, position) : list의 position번째 위치한 item 값을 리턴
print(list) : list의 모든 item을 list에 저장된 순서대로 공백없이 출력한다
*/

typedef struct __Node{
	char elem; // 원소
    Node * next; // 다음 노드를 가리키는 포인터
	Node * prev; // 이전 노드를 가리키는 포인터
}Node;

typedef struct __ArrayList{
    Node * head; // 리스트의 시작 노드를 가리키는 포인터
    Node * tail; // 리스트의 끝부분을 가리키는 포인터
}List;

Node * getNode(){ // Node의 포인터를 반환
	Node * new_node = (Node *)calloc(1, sizeof(Node)); // malloc을 하면서 clear를 실시
    /* malloc을 사용하는 경우 heap이 정리되어 있지 않을 가능성 => memset을 사용하는 것이 좋음  
	node = (Node *)malloc(sizeof(Node))
    */
	return new_node;
}

// 초기화
List *initList(List *list){
    Node *head = getNode();
    Node *tail = getNode();

    head -> next = tail;
    tail -> prev = head;
    list->head=head;
    list->tail=tail;

    return list;
}

// void traverseList(Node * node, Node ** tail){
        
//     }
// }

// 노드 삽입    
// void insertAfter(Node * newNode){
   
// }

void add(Node * list, int position, char elem){
    int i;
    Node * p = list.head;

    for(i=0; i<position; i++){
        list = list->next;
    }
}

// 노드 삭제
void deleteNode(Node * node){
    free(node);
}



int main(void){
	List *list;
    list=initList(list);
    
	char input;
	int num_of_operation; // 연산의 개수
    int cnt = 0; // 반복횟수
    
    int position;
    char item;

	scanf("%d", &num_of_operation);
	getchar();

    while(cnt!=num_of_operation){ // 연산 횟수만큼 출력
        scanf("%c", &input);
        getchar();
        switch(input){
            case 'A':
                scanf("%d %c", &position, &item);
                add(&list, position, item);
                break;
            case 'D':
                scanf("%d", &position);
                delete(&list, position);
                break;
            case 'G':
                scanf("%d", &position);
                get_entry(&list, position);
                break;
            case 'P':
                print(&list);
                break;
        }
        cnt++;   
    }
    
	return 0;
}