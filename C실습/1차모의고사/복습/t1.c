#include <stdio.h>

int main(void){
    int cnt=0;
    int sum=0;
    int num;

    while(1){
        scanf("%d", &num);

        if (num==0) break;

        if (num % 2== 0){
            sum += num;
            cnt++;
        }
        
    }

    if (cnt==0){
        printf("0 0.00");
    }
    else{
        printf("%d %.2lf", sum, (double)sum/cnt);
    }

    return 0;


}