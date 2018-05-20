#include <stdio.h>

int check(char c){
    char check[10]={'a','e','i','o','u', 'A', 'E', 'I', 'O', 'U'};
    int i;

    for(i=0; i<10; i++){
        if ( c == check[i]){
            return 1;
        }
    }
    return 0;
}
int main(void){
    char arr[10];
    
    int i;

    for(i=0; i<10; i++){
        scanf("%c", &arr[i]);
    }
    for(i=9; i>=0; i--){
        if (check(arr[i])) continue;

        if(arr[i] >= 'a' && arr[i] <='z'){
            printf("%c", arr[i]+('A'-'a'));
        }
        else if(arr[i] >= 'A' && arr[i] <='Z'){
            printf("%c", arr[i]-('A'-'a'));
        }
    }

    return 0;
}