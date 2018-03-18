#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* prefixAverages1(int arr[], int SizeOfArray) {
	int i, j;
	int * resultArr = (int *)malloc(sizeof(int) * SizeOfArray);

	for (i = 0; i < SizeOfArray; i++) {
		int sum = arr[i];
		for (j = 0; j < i; j++) {
			sum += arr[j];
		}
		resultArr[i] = (float)sum / (i + 1) + 0.5;
	}

	free(resultArr);
	return resultArr;
}


int* prefixAverages2(int arr[], int SizeOfArray) {
	int i;
	int sum = 0;
	int * resultArr = (int *)malloc(sizeof(int) * SizeOfArray);

	for (i = 0; i < SizeOfArray; i++) {
		sum += arr[i];
		int avg = (float)sum / (i + 1) + 0.5;
		resultArr[i] = avg;
	}
	free(resultArr);

	return resultArr;
}

int main() {
	int SizeOfArray;
	int * arr;
	int i = 0;
	int *arr1, *arr2;
	double result1, result2;
	time_t start1, end1, start2, end2;
	
	srand((int)time(NULL));


	scanf_s("%d", &SizeOfArray);
	arr = (int *)malloc(sizeof(int) * SizeOfArray);

	for (i = 0; i < SizeOfArray; i++) {
		int random_element = (rand() % SizeOfArray) + 1;
		arr[i] = random_element;
	}
	
	/* prefixAverages1 시간측정 */
	start1 = clock();
	arr1 = prefixAverages1(arr, SizeOfArray);
	end1 = clock();

	result1 = (double)(end1 - start1);

	/* prefixAverages2 시간측정 */

	start2 = (double)clock();
	arr2 = prefixAverages2(arr, SizeOfArray);
	end2 = (double)clock();
	
	result2 = (double)(end2 - start2);

	/* 시간 측정결과 출력 */
	printf("%0.9f ms\n%0.9f ms", result1, result2);
	

	return 0;

}