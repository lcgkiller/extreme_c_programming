#include <stdio.h>

// (479p) 함수의 인자로 전달되고 return문에 의해 반환되는 구조체 변수

typedef struct point{
    int xpos;
    int ypos;
}Point;

void ShowPosition(Point pos){
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void){
    Point cen;
    printf("Input current pos : ");
    scanf("%d %d", &cen.xpos, &cen.ypos);
    return cen;
}

int main(void){
    Point curPos = GetCurrentPosition(); // 함수가 반환하는 값으로 구조체 변수 curPos 초기화
    ShowPosition(curPos);

    return 0;
}