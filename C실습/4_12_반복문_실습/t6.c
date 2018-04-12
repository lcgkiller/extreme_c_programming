#include <stdio.h>

int main(void){
    int num;
    int min, max;
    scanf("%d", &num);
    min = num;
    max = num;
    while(num!=0){
        scanf("%d", &num);

        if (num==0) break;
        else{
            if (min > num) 
                min = num;
        
            if (max < num)
                max = num;
        }
        
    }
    printf("%d %d", max, min);
    return 0;
}