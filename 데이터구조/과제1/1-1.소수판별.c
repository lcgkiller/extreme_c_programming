#include <stdio.h>

void is_prime(int n) {
	int i = 2;
	for (i = 2; i <= (n / 2); i++) {
		if (n % i == 0) {
			printf("composite");
            break;
		}

        if (i == (n/2)){
            printf("prime");
        }   
	}
}

int main() {
	int input;

	scanf_s("%d", &input);
	is_prime(input);

	return 0;
}