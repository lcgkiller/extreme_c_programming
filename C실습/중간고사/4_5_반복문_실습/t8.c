#include <stdio.h>

int main(void){
    int n, m;
    int i, j;
    int result = 1;
    scanf("%d %d", &n, &m);

    for(i=n; i<=m; i++){
        result = 1;
        printf("%d!=", i);
        for(j=1; j<=i; j++){
            result *= j;
            if(j==1) {
                printf("%d", j);
            }
            else{
                printf("*%d", j);
            }
            
        }
        printf("=%d\n", result);
        
    }
    return 0;
}