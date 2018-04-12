#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char elem;
    struct Node * prev;
    struct Node * next;
}Node;

typedef struct List{
    struct Node * header;
    struct Node * trailer;
}List;

Node * get_node(){
    Node * new_node = (Node *)malloc(sizeof(Node));
    return new_node;
}

void initList(List *list){
    list->header = get_node();    // header 할당
    list->trailer = get_node();   // trailer 할당
    list->header->next = list->trailer; // 서로 연결
    list->trailer->prev = list->header;
}

void add(List *list, int position, char elem){
    int i;
    Node *current = list->header;
    Node *new_node = get_node();
    new_node -> elem = elem; // new_node에 데이터 저장
    if (position <= 0){
        printf("invalid position\n");
        return;
    }
    
    for(i=1; i<position; i++){
        current = current -> next;
        if (current == list->trailer){
            printf("invalid position\n");
            return;
        }
    }
    
    new_node -> next = current -> next;
    current->next->prev = new_node;
    new_node -> prev = current;
    current -> next = new_node;
}

void delete(List *list, int position){
    int i;
    Node *current = list->header->next;
    
    if (position <= 0 || current == list->trailer){
        printf("invalid position\n");
        return;
    }
    
    for(i=1; i<position; i++){
        current = current->next;
        if (current == list->trailer){
            printf("invalid position\n");
            return;
        }
    }
    
    current -> next -> prev = current -> prev;
    current -> prev -> next = current -> next;
    free(current);
}

char get_entry(List *list, int position){
    Node *current = list->header->next;
    int i=0;
    if (position <= 0 || current == list->trailer){
        printf("invalid position\n");
        return ' ';
    }
    for(i=1; i<position; i++){
        current = current->next;
        if (current == list->trailer){
            printf("invalid position\n");
            return ' ';
        }
    }
    return current->elem;
}

void print(List *list){
    Node *current = list->header->next;
    while( current != list->trailer){
        printf("%c", current->elem);
        current = current->next;
    }
    printf("\n");
}

void clear(List *list){
    Node *p = list->header->next;
    while( p!=list->trailer){
        free(p);
        p = p->next;   
    }
}

int main(void){
    List list;
    initList(&list);
    
    int num_of_operation; // 연산의 개수
    int cnt = 0; // 반복횟수
    
    char input; // 연산 종류
    int position;
    char item;
    
    scanf("%d", &num_of_operation);
    getchar();
    
    while(cnt!=num_of_operation){ // 연산 횟수만큼 출력
        scanf(" %c", &input);
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
                if (get_entry(&list, position) != ' '){
                    printf("%c\n", get_entry(&list, position));
                }
                break;
            case 'P':
                print(&list);
                break;
        }
        cnt++;
    }
    clear(&list);
    return 0;
}
    
