#include <stdio.h>

int BREAD = 500;
int SNACK = 700;
int COLA = 400;

int main(void){
    int x=1, y=1, z=1;
    int sum;

    sum = 3500

    printf("���� ����� �����ϰ� �ִ� �ݾ� : 3500\n");

    for(x=1; x<sum/BREAD; x++){
        for(y=1; y<(sum/SNACK; y++){
            for(z=1; z<=sum/COLA; z++){
                if (BREAD*x+SNACK*y+COLA*z==sum){
                    printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", x, y, z);
                }
                else if(BREAD*x+SNACK*y+COLA*z>sum){
                    break;
                }
            }
        }
    }    

    return 0;       
}