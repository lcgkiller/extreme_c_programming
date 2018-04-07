#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE    50

typedef struct ArrayList{
    int list[MAX_SIZE];
    int length; // 현재 배열에 저장된 자료들의 개수
}ArrayList;

void ListInit(ArrayList * list){
    list -> length = 0;
}

int is_empty(ArrayList *list){
    return (list->length == 0 ? 1 : 0);
}

int is_full(ArrayList *list){
    return (list->length == MAX_SIZE ? 1 : 0);
}

void display(ArrayList *list){
    int i=0;
    for(i=0; i<list->length; i++){
        printf(" %d", list->list[i]);
    }
    printf("\n");
}

void sort(ArrayList *list, int data){
    int i=0;
    for(i=0; i<list->length-1; i++){
        int min = list->list[0];
        int j;
        if (min >= data){ // 들어오는 값이 정렬된 리스트의 0번보다 작다면 전체를 한칸씩 뒤로 밀어준다.
            for(j=list->length-1; j>=0; j--){
                list->list[j+1] = list->list[j];
            }
            list->list[0] = data;
            break;
        }
        else if (list->list[i] >= data){ // 그 외의 경우
            for(j=list->length-1; j>=i; j--){
                list->list[j+1] = list->list[j];
            }
            list->list[i] = data;
        }
    }
}

void add(ArrayList *list, int data){
    if ( is_full(list) ){
        printf("Error. Full Exception.");
        return ;
    }

    list->list[list->length] = data;
    list -> length++;

    sort(list, data);
}


int main(void){
    ArrayList list;
    ArrayList *p;

    int num;
    int i;
    int data;

    scanf("%d", &num);
    ListInit(&list);

    for(i=0; i<num; i++){
        scanf("%d", &data);
        add(&list, data);
        if ((i+1)%3==0){
            display(&list);
        }
        if (i+1==num)
            display(&list);
    }
}