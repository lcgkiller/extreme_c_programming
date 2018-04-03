#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);

    if (num < 0){
        printf("cold, indoor\n");
    }
    else if(num>=0 && num<40){
        printf("moderate, outdoor\n");
    }
    else{
        printf("hot, indoor\n");
    }
    return 0;
}