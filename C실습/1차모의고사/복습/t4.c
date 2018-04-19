#include <stdio.h>

int main(void){
    int n, m;
    int i=0;
    int j=1;
    int sum=0;
    int num;
    int temp;

    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        scanf("%d", &num);
        temp = num;
        for(j=1; j<m; j++){
            temp *= num;
        }
        sum += temp;
    }
    printf("%d", sum);

    return 0;
}