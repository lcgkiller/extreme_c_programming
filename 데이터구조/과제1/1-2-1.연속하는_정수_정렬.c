#include <stdio.h>

int main() {
	int arr[100];
	int i;
	int input;
	int start;
	int total = 0;
	int total_avg, input_avg;

	scanf_s("%d", &input);
	for (i = 0; i < input; i++) {
		scanf_s("%d", &arr[i]);
		total += arr[i];
	}
	
	total_avg = (int)(total / input);
	input_avg = (int)(input / 2);

	if (input % 2 == 0) {
		for (i = 0; i < input; i++) {
			printf("%d ", total_avg - input_avg + 1 + i);
		}

	}

	else {
		for (i = 0; i < input; i++) {
			printf("%d ", total_avg - input_avg + i);
		}
	}

	return 0;
}
