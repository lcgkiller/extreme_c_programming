#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
add(list position, item) : list�� position��°�� item�� �߰��Ѵ�.
delete(list, position) : list�� position��° ��ġ�� item�� �����Ѵ�
get_entry(list, position) : list�� position��° ��ġ�� item ���� ����
print(list) : list�� ��� item�� list�� ����� ������� ������� ����Ѵ�
*/

typedef struct __Node{
	char elem; // ����
    Node * next; // ���� ��带 ����Ű�� ������
	Node * prev; // ���� ��带 ����Ű�� ������
}Node;

typedef struct __ArrayList{
    Node * head; // ����Ʈ�� ���� ��带 ����Ű�� ������
    Node * tail; // ����Ʈ�� ���κ��� ����Ű�� ������
}List;

Node * getNode(){ // Node�� �����͸� ��ȯ
	Node * new_node = (Node *)calloc(1, sizeof(Node)); // malloc�� �ϸ鼭 clear�� �ǽ�
    /* malloc�� ����ϴ� ��� heap�� �����Ǿ� ���� ���� ���ɼ� => memset�� ����ϴ� ���� ����  
	node = (Node *)malloc(sizeof(Node))
    */
	return new_node;
}

// �ʱ�ȭ
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

// ��� ����    
// void insertAfter(Node * newNode){
   
// }

void add(Node * list, int position, char elem){
    int i;
    Node * p = list.head;

    for(i=0; i<position; i++){
        list = list->next;
    }
}

// ��� ����
void deleteNode(Node * node){
    free(node);
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