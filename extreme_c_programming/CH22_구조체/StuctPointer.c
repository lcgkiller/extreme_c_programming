#include <stdio.h>

struct point{
    int xpos;
    int ypos;
};

struct circle{
    double radius;
    struct point * center; // ������ ������ ����ü(point)�� ����� �� �� ����
};

int main(void){

    struct point cen = {2,7};
    double rad = 5.5;
    struct circle ring = {rad, &cen}; // ring�� ��� center�� ����ü ���� cen�� ����Ű�� ����

    printf("���� ������ : %g \n", ring.radius);
    printf("���� �߽� : [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);

    return 0;

    return 0;
}