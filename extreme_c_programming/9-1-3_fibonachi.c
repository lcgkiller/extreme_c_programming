#include <stdio.h>
void fibo(int input){
    int f1 = 0;
    int f2 = 1;
    int f3, i;

    if (input==1)
        printf("%d ", f1);
    else
        printf("%d %d ", f1, f2);

    for(i=0; i<input-2; i++){
        f3 = f1+f2;
        printf("%d ", f3);
        f1=f2;
        f2=f3;
    }
}

int main(void){
    int input;
    printf("������� ���� �Է� : ");
    scanf_s("%d", &input);
    if  (input<1)
    {
        printf("1�̻��� �� �Է� \n");
        return -1;
    }

    fibo(input);
    return 0;
}