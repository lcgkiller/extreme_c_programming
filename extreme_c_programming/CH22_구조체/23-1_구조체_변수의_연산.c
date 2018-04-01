#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

void SwapPoint(Point * point1, Point * point2){

    Point temp = *point1;
    *point1 = *point2;
    *point2 = temp;

    /* My Answer */
    // int temp1 = point1->xpos;
    // int temp2 = point1->ypos;

    // point1->xpos = point2->xpos;
    // point2->xpos = temp1;

    // point1->ypos = point2->ypos;
    // point2->ypos = temp2;
}

int main(void){
    Point pos1 = {2,4};
    Point pos2 = {5,7};

    SwapPoint(&pos1, &pos2);

    printf("pos1 : [%d, %d]\n", pos1.xpos, pos1.ypos);
    printf("pos2 : [%d, %d]", pos2.xpos, pos2.ypos);

    return 0;
}