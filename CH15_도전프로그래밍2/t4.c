#include <stdio.h>
#include <string.h>

void Palindrome(char * str, int len){
    int i=0;

    for(i=0; i<len/2; i++){
        if (str[i] != str[len-1-i]){
            printf("ȸ���� �ƴմϴ�.\n");
            break;
        }
        else{
            printf("ȸ�� �Դϴ�.\n");
            break;
        }
    }
}

int main(){
    char str[100];
    int len = 0;
    int i;

    printf("���ڿ� �Է� : ");
    scanf("%s", str);

    len = strlen(str);
    Palindrome(str, len);

    return 0;

}