#include <stdio.h>

struct time{
    int h;
    int m;
    int s;
};

int main()
{
    struct time time1, time2;
    int h, m, s;
    int total1, total2;
    int diff;

    scanf("%d %d %d", &time1.h, &time1.m, &time1.s); 
    scanf("%d %d %d", &time2.h, &time2.m, &time2.s); 

    total1 = ( time1.h * 60 * 60 ) + ( time1.m * 60 ) + time1.s;
    total2 = ( time2.h * 60 * 60 ) + ( time2.m * 60 ) + time2.s;

    diff = total2 - total1;

    h = (int)(diff / (60 * 60));
    m = (int)((diff - h*60 * 60) / 60);
    s = diff - ( h * 60 * 60 ) - ( m * 60);

    printf("%d %d %d", h, m, s);
    return 0;
    
}

