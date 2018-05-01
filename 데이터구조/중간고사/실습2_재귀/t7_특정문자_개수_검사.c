#include <stdio.h>
#include <string.h>

void f7(int n, int cnt, char str[100], char check){
    if (n==strlen(str)){
        printf("%d", cnt);
        return;
    }
    else{
        if (str[n] == check){
            cnt ++;
        }
        
        f7(n+1, cnt, str, check);
    }
}

void P7(){
    char str[100];
    char check;
    int n=0, cnt=0;

    scanf("%s\n", str);
    scanf("%c", &check);

    f7(n, cnt, str, check);
}


/* ³ªÀÇ ´ä */
void HowMany(char * str, char check, int cnt){

    if (str[0] == '\0'){
        printf("%d\n", cnt);
        return;
    }

    if (str[0] == check)
        cnt += 1;
    
    HowMany(str+1, check, cnt);
}

void myAnswer(){
    char str[101];
    char check;
    int len;
    int result;

    scanf("%s\n", str);
    scanf("%c", &check);

    HowMany(str, check, 0);
}

int main(void){
    P7();
}