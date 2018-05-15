#include <stdio.h>

int n, m;

int is_prime(int x){
    int i;
    int cnt=0;
    for(i=1; i<=x; i++){
        if(x % i == 0){
            cnt++;
        }
    }
    if (cnt==2){
        return 1;
    }
    return 0;
}

int next_prime(int x){
    int result=0;
    if(is_prime(x)){
        return x;
    }
    else{
        return 0;
    }
}

int main(void){
    int i=1;
    int cnt=0;
    int flag=0;
    scanf("%d %d", &n, &m);
    
    while(cnt<m){
        flag = next_prime(n+i);
        if (flag){
            printf(" %d", flag);
            flag = 0;
            cnt++;
        }
        i++;
    }
    
    return 0;
}