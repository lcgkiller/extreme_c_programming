#include <stdio.h>

struct student{
    char name[9];
    int score;
};

int main(){

    struct student arr[5];
    int i;
    float average;
    int total = 0;

    for(i=0; i<5; i++){
        scanf("%s %d", &arr[i].name, &arr[i].score);
    }

    for(i=0; i<5; i++){
        total += arr[i].score;
    }

    average = total / 5;

    for(i=0; i<5; i++){
        if (arr[i].score <= average){
            printf("%s\n", arr[i].name);
        }
    }

    return 0;
}