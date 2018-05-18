#include <stdio.h>
void factor(int n){
    int i;
    for(i=1; i<=n; i++){
        if(n%i==0){
            printf(" %d", i);
        }
    }
    printf("\n");
}
int main(void){
    int num;
    
    do{
        scanf("%d", &num);
        factor(num);
    }while(num>0);

    return 0;
}