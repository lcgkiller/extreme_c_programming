#include <stdio.h>

int add(int x, int y){
    return x+y;
}
int main(void){
    int num;
    int i;
    int result=0;
    scanf("%d", &num);
    for(i=0; i<=num; i++){
        result = add(result, i);
    }

    printf("%d\n", result);
    return 0;
}