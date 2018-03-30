#include <stdio.h>

int main(void){

	/* Type or paste your code in this area */
	double r;
	float pi = 3.14;
	float result;
	scanf("%lf", &r);
	result = ((int)(4.0 / 3.0*pi*r*r*r + 5)) / 10 * 10;

	printf("%d", (int)result);
	return 0;
}