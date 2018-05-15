#include <stdio.h>

int n;
void print_line(int x, int y, int z){
    int i, j;
    for(i=1; i<=x; i++){
        printf(" ");
    }
    for(i=1; i<=y; i++){
        printf("*");
    }
    for(i=1; i<=z; i++){
        printf(" ");
    }
    printf("\n");
}

int main(void){
    int i;
    scanf("%d", &n);

    for(i=n-1; i>=0; i--){
        print_line(i, 2*(n-i)-1, i);
    }
}