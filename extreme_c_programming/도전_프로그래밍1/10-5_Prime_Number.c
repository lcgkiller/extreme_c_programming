#include <stdio.h>
int main(void){
    int count = 0; // �Ҽ� ��� ����
    int primeNum = 2;
    int i;
    int check = 0;

    while(count!=10){   // �Ҽ��� 10���� ��µǸ� �����Ѵ�.
        for(i=(int)primeNum/2; i>=1; i--){ // i�� �־��� primeNum�� 1/2���� �����Ѵ�.
            if (primeNum%i==0){
                check++;
            }
            if (check>=2){
                break;
            }
        }
        if (check==1){
            printf("%d \n", primeNum);
            count += 1;        
        }
        check = 0; 
        primeNum++;
        
    }
    return 0;       
}