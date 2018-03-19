#include<stdio.h>
#include<stdlib.h>

void QuickSort(int arr[], int left, int right) {
  int L = left, R = right;
  int temp;
  int pivot = arr[(left + right) / 2];
  int i;

  while (L <= R) {
    while (arr[L] < pivot) 
      L++;
    while (arr[R] > pivot)
      R--;

    if (L <= R) { 
      if (L != R) {
        temp = arr[L];
        arr[L] = arr[R];
        arr[R] = temp;
      } 
      L++; R--;
  }
  }

  if (left < R)
    QuickSort(arr, left, R);
  if (L < right)
    QuickSort(arr, L, right);
    
}

int main(void) {
    int * array;
	int i;
	int input;

	scanf("%d", &input);
    array = (int *)malloc(sizeof(int) * input);

	for (i = 0; i < input; i++) {
		scanf("%d", &array[i]);
	}
    QuickSort(array, 0, input-1); 

    for (i = 0; i < input; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

