#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// add�� num-1���� ���ƾ���
// add�� print�� ����

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
	char elem; // ����
    struct Node * next; // ���� ��带 ����Ű�� ������
	struct Node * prev; // ���� ��带 ����Ű�� ������
}Node;

typedef struct __List{
    Node * head;
    Node * tail;
}List;

Node * getNode(){ // Node�� �����͸� ��ȯ
/* malloc�� ����ϴ� ��� heap�� �����Ǿ� ���� ���� ���ɼ��� �����Ѵ�.
   => memset�� ����ϴ� ���� ���� 
*/
	Node * new_node = (Node *)calloc(1, sizeof(Node)); // malloc�� �ϸ鼭 clear�� �ǽ�

	return new_node;
}

// �ʱ�ȭ
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
	int num_of_operation; // ������ ����
    int cnt = 0; // �ݺ�Ƚ��
    
    int position;
    char item;

	scanf("%d", &num_of_operation);
	getchar();

    while(cnt!=num_of_operation){ // ���� Ƚ����ŭ ���
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