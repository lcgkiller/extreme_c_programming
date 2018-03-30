#include <stdio.h>

int main(void){
    float x = 1111111111111111.0;
    double y = 1111111111111111.0;

    printf("x : %f\n", x);
    printf("y : %f\n", y);

    return 0;
    
    /* 4-10
    int a, b;
    int quo, mod;
    scanf("%d %d", &a, &b);

    quo = (a>b) ? a / b : b/ a;
    mod = (a>b) ? a % b : b % a;
    printf("%d\n%d\n", quo, mod);
    return 0;
    */

    /* 4-9
    int a,b;
    int result;
    scanf("%d %d", &a, &b);

    result = (a>b) ? a : b;
    printf("%d", result);

    return 0;
    */

    /* 4-8
    int num;
    char c;
    scanf("%d", &num);

    // c = (num % 2 == 0) ? "even" : "odd";

    printf("%s", (num % 2 == 0) ? "even" : "odd");
    
    return 0;
    */
    /* 4-7
    char c;
    char a = 'a';
    char A = 'A';
    char z = 'z';
    char Z = 'Z';
    int result;
    scanf("%c", &c);

    result = ((c>=a && c<=z) || (c>=A && c<=Z)) ? 1 : 0;

    printf("%d", result);

    return 0;
    */
    /* 4-6
    int num;
    int result;
    scanf("%d", &num);
    result = (num>=20 && num<=30) ? 1 : 0;
    printf("%d", result);
    return 0;
    */
    /* 4-5
    double pi = 3.14;
    double num;
    double r;

    scanf("%lf", &num);

    r = num / pi / 2;
    printf("%.0lf", pi*r*r);

    return 0;
    */
    /* 4-4
    int num;
    scanf("%d", &num);

    num += 500;

    printf("%d", num / 1000 * 1000);
	return 0;
    */
    /* 4-3
    int num;
    scanf("%d", &num);

    num += 500;

    printf("%d", num / 1000 * 1000);

    return 0;
    */

    /* 4-2
    int h, m, s;
    int num;

    scanf("%d", &num);

    m = num / 60;
    h = m /  60;
    s = num % 60;
    m = m % 60;

    printf("%d:%d:%d", h, m, s);

    return 0;
    */

    /* 4-1
    int num;
    scanf("%d", &num);

    printf("%dTTHO %dTHO %dHUN %dTEN %d", (num/10000)%10,(num/1000)%10,(num/100)%10,(num/10)%10,num%10);

    return 0;
    */
}