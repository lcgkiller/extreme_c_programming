#include <stdio.h>

// (479p) �Լ��� ���ڷ� ���޵ǰ� return���� ���� ��ȯ�Ǵ� ����ü ����

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
    Point curPos = GetCurrentPosition(); // �Լ��� ��ȯ�ϴ� ������ ����ü ���� curPos �ʱ�ȭ
    ShowPosition(curPos);

    return 0;
}