#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char * str;
    int maxlen;
    int len;
    int i =0;
    printf("���ڿ� �ִ� ���� : ");
    scanf("%d", &maxlen);
    getchar();

    str = (char *)malloc(sizeof(char) * maxlen+1);

    printf("���ڿ� �Է� :");
    fgets(str, maxlen+1, stdin);
    str[strlen(str)-1]=0;
    len = strlen(str);

    for(i=len; i>0; i--){
        if(str[i]==' '){
            printf("%s ", &str[i+1]);
            str[i] = 0;
        }
    }
    printf("%s", &str[0]);
    free(str);    
    return 0;
}
