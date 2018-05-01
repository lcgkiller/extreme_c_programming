#include <stdio.h>

int main(void){
    int i;
    int a, b,c;
    int num;
    int sum = 0;

    scanf("%d", &num);
    
    for(i=0; i<num; i++){
        sum = 0;
        scanf("%d %d %d", &a, &b, &c);

        if ( a<0 || b<0 || c<0){
            printf("%d", 0);
            break;
        }
        if (a>1000 || b>1000 || c>1000){
            continue;
        }
        sum += a + b + c;
        printf("%d\n", sum);
    }

    return 0;
}