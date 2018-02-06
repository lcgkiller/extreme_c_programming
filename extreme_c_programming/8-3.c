#include <stdio.h>

int main(void) {
	int a;
	int z;
	int result;
	for (a = 0; a < 10; a++) {
		for (z = 0; z < 10; z++) {
			if (a == z)
				continue;
			result = (a * 10 + z) + (z * 10 + a);
			if (result == 99)
				printf("%d%d+%d%d=%d \n", a, z, z, a, result);
		}
	}
	return 0;
}