#include <stdio.h>

int main(void){
    int cnt=0;
    int num;
    int i=2;

    scanf("%d", &num);
    
    while(num != 1){
        if (num % i == 0){
            cnt++;
            num /= i;
            continue;
        }
        else{
            if(cnt!=0) printf("%d %d\n", i, cnt);
        }
        cnt = 0;
        i ++;
    }
    printf("%d %d\n", i, cnt);
    return 0;
}