#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;

typedef struct List{
    Node *head;
    int size;
}List;

void initList(List *list){
    list -> size = 0;
    list -> head = NULL;
}

// int is_full(List *list){
//     printf("list size [%d]\n", list->size);
//     return (list->size) >= MAX_SIZE ? 1 : 0;
// }

void insert_node(List *list, int data){
    int i=0;

    Node *cur = list->head;
    Node *new_node = (Node *)malloc(sizeof(Node)); // �� ��� ����
    new_node -> data = data; // p->data, p->next �߿��� data�� �̹� ������ �� �ִ�.

    if(list->head==NULL){ // ��尡 ������� ��
        list->head = new_node;
        list->size++;
        
    }   
    else{ // ��尡 ������� ���� ��
        if(list->size == 1){ // ������ ũ�Ⱑ 1�� ��� ���
            if ( data < cur->data){ // ���� ���� �Ǵ� �����Ͱ� �� ���� ��� �� �տ� ����
                new_node -> next = cur; // ���� ���� ��带 ����Ű�� �ִ� ����
                list -> head = new_node; // ��带 ��ü����.
                list -> size++;
                return ;
            }
            else { // ���� ���ԵǴ� �����Ͱ� �� ū ��� �ڿ� ����
                cur -> next = new_node;
                list -> size++;
                return ;
            }
            cur -> next = new_node;
            list -> size++;
        }
        else{ // ������ ũ�Ⱑ 1�� �ƴ� ��� (��, 2�̻��� ���)
            if ( data < (cur->data) ){ // ���� ��庸�� �۴ٸ� �׳� �� �տ� �������ָ� ��
                new_node -> next = cur;
                list -> head = new_node;
                list -> size++;
                return ;
            }

            for(i=0; i<list->size-1; i++){// ���� ��尡 ����Ű�� ������ ũ�ٸ�, ��Һ� �ǽ�
                if (data >= cur->data && data < cur->next->data){ // (prev_data) <= input_data < (next_data)
                    new_node->next = cur->next;
                    cur -> next = new_node;
                    list -> size++;
                    return ;
                }
                else{
                    cur = cur->next; // �ڱ� �ڸ��� ã�� ������ ��� ����
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
