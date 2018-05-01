#include <stdio.h>

int main(void){
    int num;
    int reverse=0;
    int cnt=0;
    int i=1;
    int digit=1;
    int temp;
    int result=0;
    
    scanf("%d", &num);
    temp = num;

    while(num!=0){
        num /= 10;
        cnt ++;
    }

    while(cnt!=1){
        digit *= 10;
        cnt--;
    }

    while(temp!=0){
        reverse += digit*(temp%10);
        digit /= 10;
        temp /= 10;
    }

    for(i=1; i<=reverse; i++){
        if(reverse%i==0) result++;
    }

    printf("%d\n%d\n", reverse, result);
    
    return 0;
}