#include <stdio.h>

int main(void){

    char c;
    
    int cnt1=0; // ��
    int cnt2=0; // ��
    int cnt3=0; // ����
    int cnt4=0; // �̿�

    while(1){
        scanf("%c", &c);

        if (c=='*') break;
        else{

            if (c>='a' && c<='z'){
                cnt1++;
            }
            else if (c>='A' && c<='Z'){
                cnt2++;
            }
            else if (c>='0' && c<='9'){
                cnt3 += (int)c - (int)('0'); // ��ũ�� 
            }
            else{
                cnt4++;
            }
        }
    }
    printf("%d %d %d %d\n", cnt2, cnt1, cnt3, cnt4);
    
    return 0;
}