#include <stdio.h>

int main(){
    char * strArr[3] = {"Simple", "String", "Array"};
    int i;
    for(i=0; i<3; i++){
        printf("%s \n", strArr[i]);
    }

    return 0;
}