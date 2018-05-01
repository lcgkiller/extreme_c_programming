#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);

    if (num%2==0 && num%3==0 && num%5==0){
        printf("A\n");
    }
    else if (num%2==0 && num%3==0){
        printf("B\n");
    }
    else if (num%2==0 && num%5==0){
        printf("C\n");
    }
    else if (num%3==0 && num%5==0){
        printf("D\n");
    }
    else if (num%2==0 || num%3==0 || num%5==0 ){
        printf("E\n");
    }
    else if (num%2!=0 && num%3!=0 && num%5 != 0){
        printf("N\n");
    }
    return 0;
}