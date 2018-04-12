#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE    50 // 배열의 최대 사이즈

typedef struct ArrayList{
    int list[MAX_SIZE];
    int length; // 현재 배열에 저장된 자료들의 개수
}ArrayList;


void ListInit(ArrayList * list){ // 배열 리스트 초기화 함수
    list -> length = 0; 
}

void display(ArrayList *list){ // 출력함수
    int i=0;
    for(i=0; i<list->length; i++){
        printf(" %d", list->list[i]);
    }
    printf("\n");
}

void sort(ArrayList *list, int data){ // 정렬함수

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

void add(ArrayList *list, int data){ // 원소 추가 함수
    list->list[list->length] = data;
    sort(list, data);
    list -> length++; // 정렬하고 나서 길이 +1
}


int main(void){
    ArrayList * list = (ArrayList *)malloc(sizeof(ArrayList)); // 배열을 관리하는 리스트 동적할당

    int num; // 연산 개수
    int i;  
    int data;

    scanf("%d", &num);
    ListInit(list); // 리스트 초기화

    for(i=0; i<num; i++){
        scanf("%d", &data);
        if (i>=MAX_SIZE){ // MAX_SIZE 초과한 경우 Full Exception 에러 추가
            printf("Error. Full Exception.\n");
            display(list);
            break;
        }
        else{ // MAX_SIZE 초과하지 않은 경우 add
            add(list, data);
            if ((i+1)%3==0) // 3번 마다 출력
                display(list);
            if (i+1==num)
                display(list);    
        }
    }
    free(list); // 메모리 해제

    return 0;

}