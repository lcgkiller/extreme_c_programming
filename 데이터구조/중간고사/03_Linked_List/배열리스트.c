#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE    100

typedef struct ArrayList{
    int length;
    int list[MAX_SIZE];
}ArrayList;

void error(char *message){
    fprintf(stderr, "%s\n", message);
    exit(1);
}

void init(ArrayList *list){
    list->length = 0;
}

void add(ArrayList *list, int position, int data){
    int i = 0;

    if (is_full(list){
        error("Full Exception");
    }

    if (!is_full(list) && position>=0 && position<=list->length){
        for(i=list->length-1; i>=position; i--){
            list->list[i+1] = list->list[i];
        }
    }

    /* 틀린 예제
    if ( is_full(list) || position < 0 || position >= list->length; ){
        error("Invalid Position");
    }
    for(i=position; i<=list->length+1; i++){
        list->list[i+1] = list->list[i];
    }
    */

    list->list[position] = data;
    list->length++;
}

void delete(ArrayList *list, int position){
    int i=0;

    if ( is_empty(list) || position < 0){
        error("Invalide Position");
    }

    for(i=position; i<=list->length-1; i++){
        list->list[i+1] = list->list[i];
    }
    /* 틀린 예제 
    for(i=list->length; i>=position; i++){
        list->list[i-1] = list->list[i]
    }
    */
    list->length--;

}

int is_empty(ArrayList *list){
    if (list->length==0){
        error("Empty List");
        return 1;
    }
    
    return 0;
}

int is_full(ArrayList *list){
    if (list->length==MAX_SIZE){
        error("Full List");
        return 1;
    }

    return 0;
}

void display(ArrayList *list){
    int i;
    for(i=0; i<list->length; i++){
        printf("%d -> ", list->list[i]);
    }
}

int main(void){

    ArrayList list;

    init(&list);

    add(&list, 0, 10);
    add(&list, 0, 20);
    add(&list, 0, 30);
    display(&list);

    delete(&list, 0);
    delete(&list, 2);
    display(&list);

    /* 포인터 값을 넘길 경우 
    ArrayList *plist;

    plist = (ArrayList *)malloc(sizeof(ArrayList));
    init(plist);
    add(plist, 0, 10);
    add(plist, 0, 20);
    add(plist, 0, 30);
    display(plist);
    free(plist);

    */

    return 0;

    
}