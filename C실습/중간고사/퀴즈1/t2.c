#include <stdio.h>

int main(void) {
	int a, b;
	char c;
    int result;

	scanf("%d %d\n", &a, &b);
    scanf("%c", &c);

    if (c == '+'){
        return a+b;
    }
    else{
        if (c == '/'){
            return a/b;
        }
        else
            printf("Wrong");
    }



    result = (c == '+') ? a + b : (c == '/') ? a / b : printf("Wrong");
	return 0;
	
}

if (���ǹ�1)
{
    if (���ǹ�2)
        exp1
    else
        exp2
}
else
{
    if (���ǹ�3)
        exp3
    else
        exp4
}



