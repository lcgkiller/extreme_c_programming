#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c; // �� �Ǽ��� �����ϴ� ����
    double r1; // �� ���� ���� �����ϴ� ����
    double r2; // �� ū ���� �����ϴ� ����

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a==0){ // a�� 0�̸� ����ϴ� �����
        printf("%lf\n", -c/b);
    }
    else{
        if(b*b-4.0*a*c > 0){ // �� �Ǳ��� ���
            r1 = ((-b - sqrt(b*b-4.0*a*c)) / (2.0*a)); // ���� �ٸ� �� ���� ���� �Ǳ��� ����
            r2 = ((-b + sqrt(b*b-4.0*a*c)) / (2.0*a)); // ���� �ٸ� �� ���� ū �Ǳ��� ����
            printf("%lf %lf", r1, r2); 
        }
        else{
            if(b*b-4.0*a*c == 0){ // b^2-4ac = 0�̸� �� ���� �� ���
                printf("%lf\n", (-b)/(2.0*a));
            }
            else{ // ���� ���� ���
                printf("none\n");
            }
        }
    }
    return 0;
}