#include <stdio.h>
int function(int num){
    int result = 2;
    int k=1;

    while(1){
         if (num==1){
            k = 0;
            return k;
        }
        
        else if (result==num)
            return k;
        
        else if (result>num)
            return k-1;
        
        else{
            result *= 2;
            k++;
            continue;
        }
    }
}
int main(void){
    int input;
    printf("���� n �Է� : ");
    scanf("%d", &input);
    printf("������ �����ϴ� k�� �ִ��� : %d", function(input));
    return 0;
}