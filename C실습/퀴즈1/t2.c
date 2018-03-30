#include <stdio.h>

int main(void) {
	int a, b;
	char c;
    int result;

	scanf("%d %d\n", &a, &b);
    scanf("%c", &c);

    result = (c == '+') ? a+b : (c == '/') ? a / b : printf("Wrong");
	return 0;
	
}
