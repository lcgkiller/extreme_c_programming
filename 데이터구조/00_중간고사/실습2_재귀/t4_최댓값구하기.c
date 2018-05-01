#include <stdio.h>
#define	MAX(x,y) ( (x) > (y) ? (x) : (y) )

void Recursive(int arr[20], int n, int max, int N){
    if (n==N){
        printf("%d", max);
        return ;
    }
    else{
        max = max > arr[n] ? max : arr[n];
        Recursive(arr, n+1, max, N);
    }
}

int main(void){
    int num;
    int arr[20];
    int i;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    Recursive(arr, 1, arr[0], num);

    return 0;
}

/* 나의 방법 */
// #define	MAX(x,y) ( (x) > (y) ? (x) : (y) )
// int Recursive(int arr[], int n)
// {
//     if (n == 1)
//         return MAX(arr[n-1], arr[n]);

//     return MAX(Recursive(arr, n - 1), arr[n]);
// }

// int main(){
//     int input;
//     int i;
//     int arr[21];
//     int result;
//     scanf("%d", &input);

//     for(i=0; i<input; i++){
//         scanf("%d", &arr[i]);
//     }

//     if (input == 1){
//         printf("%d", arr[0]);
//         return;
//     }
//     else
//         result = Recursive(arr, input-1);

//     printf("%d\n", result);
//     return 0;
// }