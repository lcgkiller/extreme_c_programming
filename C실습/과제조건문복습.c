#include <stdio.h>
#include <math.h>

void P5(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double temp = (b*b)-(4.0*a*c);

    if (a==0){
        printf("%lf", -c/b);
    }
    else{
        if (temp<0){
            printf("none");
        }
        else{
            if (temp==0){
                printf("%lf", -b/(2.0*a));
            }
            else if (temp>0){
                printf("%lf %lf", (-b-sqrt(temp))/(2.0*a), (-b+sqrt(temp))/(2.0*a));
            }
        }
    }
}
void P4(){
    int a, b;
    char c;

    scanf("%c %d %d", &c, &a, &b);

    if(c=='*') printf("%d", a*b);
    else if(c=='+') printf("%d", a+b);
    else if(c=='-') printf("%d", a-b);
    else if(c=='/') printf("%.1lf", (double)a/(double)b);
    else printf("none");

}
void P3(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
 
    if (a+b==c) printf("+\n"); // a+b==c�̸� + ���
    if (a-b==c) printf("-\n"); // a-b==c�̸� - ���
    if (a*b==c) printf("*\n"); // a*b==c�̸� * ���
    if (a/b==c) printf("/\n"); // a/b==c�̸� / ���
    if (a+b!=c && a-b!=c && a*b!=c && a/b!=c) printf("Incorrect\n");

}
void P2(){
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

}
void P1(){
    char c;
    scanf("%c", &c);

    if (c>='a' && c<='z'){
        c = c + 'A' - 'a';
    }
    else if (c>='A' && c<='Z'){
        c = c - ('A' - 'a');
    }

    printf("%c", c);
}

int main(void){
    // P1();
    // P2();
    // P3();
    // P4();
    P5();
}