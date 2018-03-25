#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
    int len=strlen(str);
    str[len-1] = 0;
}
int main(){
    char str1[20];
    char str2[20];
    char str3[40];
    
    fgets(str1, sizeof(str1), stdin);
    RemoveBSN(str1);
    fgets(str2, sizeof(str2), stdin);
    RemoveBSN(str2);

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("%s\n", str3);

    return 0;
}