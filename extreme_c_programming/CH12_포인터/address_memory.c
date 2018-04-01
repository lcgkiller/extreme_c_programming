#include <stdio.h>

int main(void){
    
    int n = 0x11223344;

    printf("%x\n", *(char*)&n);
    printf("%x\n", *(short*)&n);
    return 0;
}