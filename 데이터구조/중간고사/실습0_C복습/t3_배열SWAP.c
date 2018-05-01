#include <stdio.h>


void swap(int * a, int * b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int arr[50];
	int num_of_input, i;
	int len;
	int a, b;
	int temp;

	scanf("%d", &num_of_input);

	for (i = 0; i < num_of_input; i++) {
		scanf("%d ", &arr[i]);
	}

	scanf("%d %d", &a, &b);
	swap(&arr[a], &arr[b]);


	for (i = 0; i < num_of_input; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

