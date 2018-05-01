#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int* prefixAverages1(int * arr, int size_of_array){
	int i, j;
	int * resultArr = (int *)malloc(sizeof(int) * size_of_array);
    double sum;

	for (i = 0; i < size_of_array; i++) {
		sum = 0;
		for (j = 0; j <= i; j++) {
			sum += arr[j];
		}
		resultArr[i] = sum / (i + 1) + 0.5;
	}
	return resultArr;
    free(resultArr);
}


int* prefixAverages2(int * arr, int size_of_array){
	int i;
	int * resultArr = (int *)malloc(sizeof(int) * size_of_array);
    double sum = 0;

	for (i = 0; i < size_of_array; i++) {
		sum += arr[i];
		resultArr[i] = sum / (i+1) + 0.5;
	}
	return resultArr;
    free(resultArr);
}

int main(){
	int size_of_array;
	int * arr;
	int i = 0;
	int *arr1, *arr2;

	scanf("%d", &size_of_array);
	arr = (int *)malloc(sizeof(int) * size_of_array);

	for (i = 0; i < size_of_array; i++) {
		scanf("%d", &arr[i]);
	}

	arr1 = prefixAverages1(arr, size_of_array);
	arr2 = prefixAverages2(arr, size_of_array);
	

	for (i = 0; i < size_of_array; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < size_of_array; i++) {
		printf("%d ", arr2[i]);
	}

	free(arr);

	return 0;

}

/* 시간 측정

void check_time(){
    int n;
    int i;
    scanf("%d", &n);

    int *x = (int *)malloc(sizeof(int) * n));
    int *arr1 = (int *)malloc(sizeof(int) * n));
    int *arr2 = (int *)malloc(sizeof(int) * n));

    clock_t start, end;

    for(i=0; i<n; i++){
        x[i] = rand() % 10000 + 1;
    }

    start = clock();
    arr1 = prefixAverages1(x, n);
    end = clock();

    printf("%.9lfms\n", (double)(end - start) / CLOCKS_PER_SEC);

	start = clock();
	arr2 = prefixAverage2(x, n);
	end = clock();
	printf("%.9lfms\n", (double)(end - start) / CLOCKS_PER_SEC);

	free(x);
	free(arr1);
	free(arr2);
}

 */