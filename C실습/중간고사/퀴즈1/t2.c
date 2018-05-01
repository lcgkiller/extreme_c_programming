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

if (조건문1)
{
    if (조건문2)
        exp1
    else
        exp2
}
else
{
    if (조건문3)
        exp3
    else
        exp4
}



