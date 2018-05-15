#include <stdio.h>

int max1, max2;

void update_max(int x){
    if (x > max1){
        max2 = max1;
        max1 = x;
    }
    else if (x > max2 && x <= max1){
        max2 = x;
    }
}
int main(void){
    int num = 1;
    int a,b;

    scanf("%d %d", &a, &b);

    if ( a > b){
        max1 = a;
        max2 = b;
    }
    else{
        max1 = b;
        max2 = a;
    }

    while(num!=0){
        scanf("%d", &num);
        if (num == 0) break;
        update_max(num);
    }

    printf("%d %d", max1, max2);

    return 0;
}