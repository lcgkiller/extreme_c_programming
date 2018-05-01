#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int cnt = 0;
	scanf("%d", &num);

	while (num != 0) {
		cnt++;
		num /= 10;
	}

	printf("%d", cnt);
}