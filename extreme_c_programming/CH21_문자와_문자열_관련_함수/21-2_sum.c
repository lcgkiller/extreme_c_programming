#include <stdio.h>
#include <string.h>

int ConvToInt(char c){
    static int diff = 1 - '1';
    return c+diff;
}

int main(void){
    int sum=0;
    int i;
    char str[100];

    printf("���ڿ� �Է� : ");
    scanf("%s", str);

    for(i=0; i<strlen(str); i++){
        if (str[i] >= '1' && str[i] <= '9'){
            sum += ConvToInt(str[i]);
        }
    }

    printf("��� : %d\n", sum);

    return 0;
}