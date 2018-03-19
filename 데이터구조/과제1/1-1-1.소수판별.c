#include <stdio.h>

int is_prime(int n) {
	int i = 2;
	if (n < 2) {
		printf("input wrong number");
		return 0;
	}
	if (n == 2) {
		printf("prime");
		return 1;
	}
	
	if (n % 2 == 0) {
		printf("composite");
		return 0;
	}

	for (i = 3; (i*i) <= n; i+=2) {
		if (n % i == 0) {
			printf("composite");
			return 0;
		}
	}
	printf("prime");
	return 1;
}

int main() {
	int input;

	scanf("%d", &input);
	is_prime(input);

	return 0;
}