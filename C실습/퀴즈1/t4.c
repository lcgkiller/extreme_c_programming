#include<stdio.h>

int main(){

	/* Type or paste your code in this area */
    int num;
    int a, b, c;
    int result;
    
    scanf("%d", &num);
    
    a = num % 10;
    b = num / 10 % 10;
    c = num / 100 % 10;
    
    result = (100*a+10*b+1*c);
    
    printf("%03d", result);
    
	return 0;
}