#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int num;
	int a, b;
	int i;
	int sumA=0, sumB=0, sumC=0, sumD=0;

	scanf("%d", &num);
	scanf("%d %d", &a, &b);
	int tempA = a;
	int tempB = b;
	int tempC = a*b;

	for (i = 0; i < num/a; i++) {
		
		sumA += tempA;
		tempA += a;
	}

	for (i = 0; i < num/b ; i++) {
		sumB += tempB;
		tempB += b;
	}

	for (i = 1; i <= num; i++) {
		if (i % a == 0 && i % b == 0) sumC+=i;
	}

	for (i = 1; i <= num; i++) {
		if (i % a*b == 0) continue;
		if (i % a == 0) continue;
		if (i % b == 0) continue;
		else {
			sumD += i;
		}
	}
	printf("%d %d %d %d", sumA, sumB, sumC, sumD);

	return 0;
}