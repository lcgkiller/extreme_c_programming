#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// add는 num-1까지 돌아야함
// add와 print만 구현

/*Node *insertAfter(Node *Header, Node *Tail, Node *p, int num, char item)
    Node *q;
    q = getNode();

void add_process(Node *Header, Node *Tail, int num_location, char data){
    int i;
    Node *p, *q;
    p = Header;
    for(i=1; i<num_location; i++){
        p = p->next;
        if(p==Tail){
            printf("Invalid Position\n");
            return;
        }
    }
}
Node * get_entry(Node *header, Node *Tail, int num){
    Node *p=Header;
    nt i;
    for(i=0)
}

void print_all(NOde *Header, Node *Tail){
    Node *p = Header->next;
    p = Header;
    while(p->next!=Tail){
        p=p->next;
        if(p==Tail){
            printf("I")
        }
    }
}

*/

typedef struct __Node{
	char elem; // 원소
    struct Node * next; // 다음 노드를 가리키는 포인터
	struct Node * prev; // 이전 노드를 가리키는 포인터
}Node;

typedef struct __List{
    Node * head;
    Node * tail;
}List;

Node * getNode(){ // Node의 포인터를 반환
/* malloc을 사용하는 경우 heap이 정리되어 있지 않을 가능성이 존재한다.
   => memset을 사용하는 것이 좋음 
*/
	Node * new_node = (Node *)calloc(1, sizeof(Node)); // malloc을 하면서 clear를 실시

	return new_node;
}

// 초기화
List *initList(List *list){
    Node *head = getNode();
    Node *tail = getNode();

    head -> next = tail;
    tail -> prev = head;
    // (*head) -> next = *tail;
    // (*tail) -> prev = *head;
    // list->head=head;
    // list->tail=tail;

    return list;
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