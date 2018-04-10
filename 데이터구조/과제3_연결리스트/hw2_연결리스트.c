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
    Node *new_node = (Node *)malloc(sizeof(Node)); // �� ��� ����
    new_node -> data = data; // p->data, p->next �߿��� data�� �̹� ������ �� �ִ�.

    if(list->head==NULL){ // ��尡 ������� ��
        list->head = new_node;
        list->size++;
    }   
    else{ // ��尡 ������� ���� ��
        if(list->size == 1){ // ������ ũ�Ⱑ 1�� ��� ���
            if ( data < cur -> data){ // ���� ���� �Ǵ� �����Ͱ� �� ���� ��� �� �տ� ����
                new_node -> next = cur; // ���� ���� ��带 ����Ű�� �ִ� ����
                list -> head = new_node; // ��带 ��ü����.
                list -> size++;
                return ;
            }
            else { // ���� ���ԵǴ� �����Ͱ� �� ū ��� �ڿ� ����
                new_node -> next = NULL;
                cur -> next = new_node;
                list -> size++;
                return ;
            }
        }
        else{ // ������ ũ�Ⱑ 1�� �ƴ� ��� (��, 2�̻��� ���)
            if ( data < (cur->data) ){ // ���� ��庸�� �۴ٸ� �׳� �� �տ� �������ָ� ��
                new_node -> next = cur;
                list -> head = new_node;
                list -> size++;
                return ;
            }

            for(i=0; i<list->size-1; i++){// ���� ��尡 ����Ű�� ������ ũ�ٸ�, ��Һ� �ǽ�
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