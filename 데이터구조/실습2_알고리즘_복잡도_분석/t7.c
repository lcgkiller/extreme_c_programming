#include <stdio.h>
#include <string.h>

void HowMany(char * str, char check, int cnt){

    if (str[0] == '\0'){
        printf("%d\n", cnt);
        return;
    }

    if (str[0] == check)
        cnt += 1;
    
    HowMany(str+1, check, cnt);
}

int main(){
    char str[101];
    char check;
    int len;
    int result;

    scanf("%s\n", str);
    scanf("%c", &check);

    HowMany(str, check, 0);
    
    return 0;
}