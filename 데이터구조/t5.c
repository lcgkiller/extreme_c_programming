#include <stdio.h>

struct time{
    int h;
    int m;
    int s;
};

int main()
{
    struct time time1, time2;
    struct time result;
    
    scanf("%d %d %d", &time1.h, &time1.m, &time1.s); 
    scanf("%d %d %d", &time2.h, &time2.m, &time2.s); 

    if (time2.s - time1.s < 0){
        result.s = (time2.s + 60) - time1.s;
        if (time2.h - time1.h == 0){
            result.m = (time2.m) - time1.m - 1;
            result.h = 0;
        }
        else if (time2.h - time1.h > 0){
            result.m = (time2.m + 60) - time1.m - 1;
            result.h = time2.h - time1.h - 1;
        }
    }

    else{
        result.s = time2.s - time1.s;

        if (time2.m - time1.m < 0){
            result.h = time2.h - time1.h - 1;
        }
        else{
            result.m = time2.m - time1.m;
            result.h = time2.h - time1.h;
        }
    }

    printf("%d %d %d", result.h, result.m, result.s);
    return 0;
    
}

