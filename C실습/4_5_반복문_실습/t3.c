#include <stdio.h>

int main(void){
    int num;
    int answer;
    int try=0;
    scanf("%d", &num);
    scanf("%d\n", &answer);
    do{
        try++;
        if (num < answer) printf("%d>?\n", answer);
        else if (num > answer) printf("%d<?\n", answer);
        else if (num==answer){
            printf("%d==?\n", answer);
            break;
        }
        scanf("%d\n", &answer);
    }while(1);

    printf("%d\n", try);
    return 0;
}