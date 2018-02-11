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
    printf("숫자 n 입력 : ");
    scanf("%d", &input);
    printf("공식을 만족하는 k의 최댓값은 : %d", function(input));
    return 0;
}