#include <stdio.h>

int compare_max(int a, int b, int c) {
	int result;
	int cmp1, cmp2;

	cmp1 = a - b > 0 ? a : b;
	cmp2 = b - c > 0 ? b : c;
	result = cmp1 - cmp2 > 0 ? cmp1 : cmp2;

	return result;
}

int compare_min(int a, int b, int c){
	int result;
	int cmp1, cmp2;

	cmp1 = a - b < 0 ? a : b;
	cmp2 = b - c < 0 ? b : c;
	result = cmp1 - cmp2 < 0 ? cmp1 : cmp2;

	return result;
}

int main(void) {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("���� ū �� : %d \n���� ���� �� : %d \n", compare_max(num1, num2, num3), compare_min(num1, num2, num3));

	return 0;
}