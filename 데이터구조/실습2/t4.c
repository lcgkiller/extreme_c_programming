#include <stdio.h>
#define	MAX(x,y) ( (x) > (y) ? (x) : (y) )

int Recursive(int arr[], int n)
{
    if (n == 1)
        return MAX(arr[n-1], arr[n]);

    return MAX(Recursive(arr, n - 1), arr[n]);
}

int main(){
    int input;
    int i;
    int arr[21];
    int result;
    scanf("%d", &input);

    for(i=0; i<input; i++){
        scanf("%d", &arr[i]);
    }

    if (input == 1){
        printf("%d", arr[0]);
        return;
    }
    else
        result = Recursive(arr, input-1);

    printf("%d\n", result);
    return 0;
}