#include <stdio.h>

int main(void){

    // �޴� ���� 1��~5��
    int pizza = 15000;  // ���� 15,000��
    int burger = 5000;  // ���� 5,000��
    int salad = 4500;   // ������ 4,500��
    int ice_cream = 800;// ���̽�ũ�� 800��
    int beverage = 500; // ���� 500��
    
    // �ֹ� ��ȣ num1, num2, num3
    int num1, num2, num3;

    // �� ��
    int total = 0;

    // �ֹ���ȣ 3�� �Է�
    scanf("%d %d %d", &num1, &num2, &num3);

    
    // ù��° �ֹ� �޴� 
    switch(num1){
        case 1: // ���� ����
            printf("Pizza\n"); 
            total += pizza;
            break;
        case 2: // ���� ����
            printf("Burger\n");
            total += burger;
            break;
        case 3: // ������ ����
            printf("Salad\n");
            total += salad;
            break;
        case 4: // ���̽�ũ�� ����
            printf("Ice cream\n");
            total += ice_cream;
            break;
        case 5: // ���� ����
            printf("Beverage\n");
            total += beverage;
            break;
        default: // 0�� ����(�ƹ��͵� �������� ���� ���)
            printf("None\n");
            break;
    }

    // �ι�° �ֹ� �޴� 
    switch(num2){
        case 1: // ���� ����
            printf("Pizza\n"); 
            total += pizza;
            break;
        case 2: // ���� ����
            printf("Burger\n");
            total += burger;
            break;
        case 3: // ������ ����
            printf("Salad\n");
            total += salad;
            break;
        case 4: // ���̽�ũ�� ����
            printf("Ice cream\n");
            total += ice_cream;
            break;
        case 5: // ���� ����
            printf("Beverage\n");
            total += beverage;
            break;
        default: // 0�� ����(�ƹ��͵� �������� ���� ���)
            printf("None\n");
            break;
    }

    switch(num3){
        case 1: // ���� ����
            printf("Pizza\n"); 
            total += pizza;
            break;
        case 2: // ���� ����
            printf("Burger\n");
            total += burger;
            break;
        case 3: // ������ ����
            printf("Salad\n");
            total += salad;
            break;
        case 4: // ���̽�ũ�� ����
            printf("Ice cream\n");
            total += ice_cream;
            break;
        case 5: // ���� ����
            printf("Beverage\n");
            total += beverage;
            break;
        default: // 0�� ����(�ƹ��͵� �������� ���� ���)
            printf("None\n");
            break;
    }

    printf("Total:%dwon\n",total);
    return 0;
}