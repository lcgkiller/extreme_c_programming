#include <stdio.h>
int main(void){
    int arr[100][100];
    int num;
    int i=0,j=0;
    int start = 1;

    scanf("%d", &num);
    for(i=0; i<num; i++){
        if (i % 2 == 0){
            for(j=0; j<num; j++){
                arr[i][j] = start++;
            }
        }
        else{
            for(j=num-1; j>=0; j--){
                arr[i][j] = start++;
            }
        }
        
    }
    
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}