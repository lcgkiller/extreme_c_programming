#include <stdio.h>

int main(void){
    int n, m;
    int i, j;
    scanf("%d %d", &n, &m);


    if(m%2==0){
        for(i=1; i<=n; i++){
           for(j=0; j<i; j++){
                printf("%c", 'a'+j);
             }
             printf("\n");
        }    
    }
    else{
        for(i=0; i<n; i++){
           for(j=n-1; j>=i; j--){
                printf("%c", 'a'+j-i);
             }
             printf("\n");
        }    
    }
    return 0;
}