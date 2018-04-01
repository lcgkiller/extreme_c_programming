#include <stdio.h>

struct point{
    int xpos;
    int ypos;
};

struct circle{
    double radius;
    struct point * center; // 포인터 변수도 구조체(point)의 멤버가 될 수 있음
};

int main(void){

    struct point cen = {2,7};
    double rad = 5.5;
    struct circle ring = {rad, &cen}; // ring의 멤버 center가 구조체 변수 cen을 가리키는 형태

    printf("원의 반지름 : %g \n", ring.radius);
    printf("원의 중심 : [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);

    return 0;

    return 0;
}