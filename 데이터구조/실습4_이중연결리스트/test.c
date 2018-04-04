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
    Node * next; // 다음 노드를 가리키는 포인터 (구조체 __Node의 포인터 변수 선언)
	Node * prev; // 이전 노드를 가리키는 포인터 (구조체 __Node의 포인터 변수 선언)
}Node;

typedef struct __ArrayList{
    Node * head; // 리스트의 시작 노드를 가리키는 포인터
    Node * tail; // 리스트의 끝부분을 가리키는 포인터
}List;

Node * getNode(Node){ // Node의 포인터를 반환
	Node * node = (Node *)calloc(1, sizeof(Node)); // malloc을 하면서 clear를 실시

    /* malloc을 사용하는 경우 heap이 정리되어 있지 않을 가능성 => memset을 사용하는 것이 좋음  
	node = (Node *)malloc(sizeof(Node))
    */
	return node;
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