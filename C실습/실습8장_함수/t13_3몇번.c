#include <stdio.h>

int n;
int count_3(int x){
    int cnt=0;
    while(x!=0){
        if (x%10 == 3) cnt++;
        x/=10;
    }
    return cnt;
}

int main(void){
    int i;
    int result =0;
    scanf("%d", &n);

    for(i=3; i<=n; i++){
        result += count_3(i);
    }

    printf("%d", result);
    return 0;
}