#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 50

typedef int element;
typedef struct {
    element list[MAX_LIST_SIZE];
    int length;
}ArrayListType;


// ���� ó�� �Լ�
void error(char * message){
    fprintf(stderr, "%s\n", message);
    exit(1);
}

// ����Ʈ �ʱ�ȭ
void init(ArrayListType * L){
    L -> length = 0;
}

// ����Ʈ�� ��� ������ 1, �׷��� ������ 0 ��ȯ
int is_empty(ArrayListType * L){
    return L->length == 0;
}

// ����Ʈ�� ���� �������� 1�� ��ȯ, �׷��� ������ 0 ��ȯ
int is_full(ArrayListType * L){
    return L->length == MAX_LIST_SIZE;
}

void display(ArrayListType *L){
    int i;
    for(i=0; i<L->length; i++){
        printf("%d ", L->list[i]);
    }
}

void add(ArrayListType * L, int position, element item){
    if (!is_full(L) && (position >= 0) && (position <= L->length)){
        int i;
        for(i=(L->length-1); i>=position; i--){
            L->list[i+1] = L->list[i];
        }
        L->list[position] = item;
        L->length++;
    }
}
element delete(ArrayListType *L, int position){
    int i;
    element item;

    if(position<0 || position >= L->length){
        error("��ġ ����");
    }
    item = L->list[position];
    for(i=position; i<(L->length-1); i++){
        L->list[i] = L->list[i+1];
    }
    L -> length--;
    return item;
}



// int LFirst(ArrayList * list, int *pdata){
//     if (list->length == 0){
//         return 0; // FALSE ��ȯ
//     }
//     list -> curPosition = 0;
//     *pdata = list->list[list->curPosition];
//     return 1; // TRUE ��ȯ
// }

// int LNext(ArrayList * list, int *pdata){
//     if (list->curPosition >= (list->length)-1){
//         return 0; // curPosition�� �迭���̸� ������ FALSE
//     }
//     list -> curPosition++;
//     *pdata = list->list[list->curPosition];
//     return 1;
// }

int main(){
    ArrayListType list1;
    ArrayListType *plist;


    int num;
    int i;
    int data;

    scanf("%d", &num);
    init(&list1);

     for(i=0; i<num; i++){
        scanf("%d", &data);
        add(&list1, 0, data);

        if ((i+1)%3==0){
            printf("i : %d \n", i);
            display(&list1);
        }
        if (i+1==num)
            display(&list1);
    }
    // add(&list1, 0, 10);
    // add(&list1, 0, 20);
    // add(&list1, 0, 30);
    // display(&list1);

    // plist = (ArrayListType *)malloc(sizeof(ArrayListType));
    // init(plist);
    // add(plist, 0, 10);
    // add(plist, 0, 20);
    // add(plist, 0, 30);

    // display(plist);
    // free(plist);
    return 0;
}