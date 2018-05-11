#include <stdio.h>

void print_row1(int x){
    int i=0;
    for(i=0; i<x; i++){
        printf("%d", x);
    }
    printf("\n");
}
void print_row2(int x){
    int i=0;
    for(i=0; i<x; i++){
        if(i==0 || i==x-1){
            printf("%d", x);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
int main(void){
    int num;
    int i=0;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        if(i==0 || i==num-1) print_row1(num);
        else print_row2(num);
    }
    return 0;
}