#include<stdio.h>

int main(){

	/* Type or paste your code in this area */
    int a, b, c;
    int sum = 0;
    double avg;
    scanf("%d %d %d",  &a, &b, &c);
    
    sum += a % 2 == 0 ? a : 0;
    sum += b % 2 == 0 ? b : 0;
    sum += c % 2 == 0 ? c : 0;
    
    avg = sum  / 3.0;
    
    printf("%d %.1f", sum, avg);
    
	return 0;
}