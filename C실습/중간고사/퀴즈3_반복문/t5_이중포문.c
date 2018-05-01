#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	int i, j;
	int tempA;
	int tempB;
	scanf("%d", &num);

	tempA = num % 10;
	tempB = num / 10 % 10;
	for (i = 1; i<= tempB; i++) {
		for (j = 1; j <= tempA; j++) {
			if (i == 1 || i == tempB) printf("%d", j);
			else {
				if (j == 1 || j == tempA) printf("%d", j);
				else printf(" ");
			}
		}
		printf("\n");
	}
}
