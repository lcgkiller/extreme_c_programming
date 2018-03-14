#include <stdio.h>
void is_prime(int n) {
	int i = 2;
	for (i = 2; i <= (int)(n / 2); i++) {
		if (n % i == 0) {
			printf("COMPOSITE");
            break;
		}

        if (i == (int)(n/2)){
            printf("PRIME");
        }   
	}
}

int main() {
	int input;

	scanf_s("%d", &input);
	is_prime(input);

	return 0;
}