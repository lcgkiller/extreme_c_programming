#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE    10

typedef struct ArrayList{
    int list[MAX_SIZE];
    int length; // 현재 배열에 저장된 자료들의 개수
}ArrayList;


void ListInit(ArrayList * list){
    list -> length = 0;
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
    int length = list->length;
    for(i=0; i<length; i++){
        int j;
        if (list->list[0] >= data){ // 들어오는 값이 정렬된 리스트의 첫번째 값보다 작다면 length-1 ~ 0까지 한칸씩 뒤로 밀어준다.
            for(j=length-1; j>=0; j--)
                list->list[j+1] = list->list[j];
            list->list[0] = data;
            break;
        }
        else if(list->list[list->length-1] <= data) // 들어오는 값이 정렬된 리스트의 맨 마지막 값보다 크다면 MAX_SIZE 범위를 확인한 뒤 삽입한다.
            list->list[list->length] = data;
        
        else if (list->list[i] >= data){ // 그 외의 경우
            for(j=length-1; j>=i; j--)
                list->list[j+1] = list->list[j];
            list->list[i] = data;
            break;
        }
    }
}

void add(ArrayList *list, int data){
    list->list[list->length] = data;
    sort(list, data);
    list -> length++;
}


int main(void){
    ArrayList * list = (ArrayList *)malloc(sizeof(ArrayList));

    int num;
    int i;
    int data;

    scanf("%d", &num);
    ListInit(list);

    for(i=0; i<num; i++){
        scanf("%d", &data);
        if (i>=MAX_SIZE){
            printf("Error. Full Exception.\n");
            display(list);
            break;
        }
        else{
            add(list, data);
            if ((i+1)%3==0)
                display(list);
            if (i+1==num)
                display(list);    
        }
    }
    free(list);

    return 0;

}