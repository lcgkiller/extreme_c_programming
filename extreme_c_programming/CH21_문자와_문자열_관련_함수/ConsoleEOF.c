#include <stdio.h>

int main(void){
    int ch;

    while(1){
        ch = getchar();
        if(ch==EOF)
            break;
        fputc(ch, stdout);

    }

    return 0;
}