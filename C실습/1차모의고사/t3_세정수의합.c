#include <stdio.h>

int main(void){
    int a,b,c;
    int num;
    int i;
    int cnt=0;
    int sum=0;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        sum = 0;
        scanf("%d %d %d", &a, &b, &c);
        if(a<0 || a>1000){
            cnt = i;
            result = a;
            printf("%d %d\n", cnt+1, a);
            break;
        }
        else if(b<0 || b>1000){
            cnt = i;
            result = b;
            printf("%d %d\n", cnt+1, b);
            break;
        }
        else if (c<=0 || c>1000){
            cnt = i;
            result = c;
            printf("%d %d\n", cnt+1, c);
            break;
        }
        else{
            sum += a+b+c;
            printf("%d\n", sum);
        }
    }    

    return 0;

}