#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;
	int num;
	int sum = 0;
	int min, max;

	scanf("%d", &input);
	sum = input;
	min = input;
	max = input;
	while (input != -99) {
		scanf("%d", &input);

		if (input == -99) break;
		else {
			if (input > max) {
				max = input;
			}
			if (input < min) {
				min = input;
			}
		}
		sum += input;

	}

	printf("%d %d %d", sum, max, min);
}