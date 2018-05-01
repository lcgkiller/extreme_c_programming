#include <stdio.h>

int mostOnes(int arr[100][100], int n){
    int result=0;
    int i = 0, j = 0;

    while(i < n){
        if(arr[i][j]==1){
            result = i;
            j++;
        }
        else{
            i++;
        }
    }
    return result;
}
int main(void){
    int n;
    int arr[100][100];
    int i, j;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("%d", mostOnes(arr, n));

    return 0;
}