#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE    10

typedef struct ArrayList{
    int list[MAX_SIZE];
    int length; // ���� �迭�� ����� �ڷ���� ����
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
        if (list->list[0] >= data){ // ������ ���� ���ĵ� ����Ʈ�� ù��° ������ �۴ٸ� length-1 ~ 0���� ��ĭ�� �ڷ� �о��ش�.
            for(j=length-1; j>=0; j--)
                list->list[j+1] = list->list[j];
            list->list[0] = data;
            break;
        }
        else if(list->list[list->length-1] <= data) // ������ ���� ���ĵ� ����Ʈ�� �� ������ ������ ũ�ٸ� MAX_SIZE ������ Ȯ���� �� �����Ѵ�.
            list->list[list->length] = data;
        
        else if (list->list[i] >= data){ // �� ���� ���
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