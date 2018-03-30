#include<stdio.h>

int main(){

	/* Type or paste your code in this area */
	char a, b, c;
	
	int result = 0;
	
	scanf("%c %c %c", &a, &b, &c);
	
	result += (a >=  'a' && a <='z') || (a>= 'A' && a<='Z')? 1 : 0;
	result += (b >=  'a' && b <='z') || (b>= 'A' && b<='Z')? 1 : 0;
	result += (c >=  'a' && c <='z') || (c>= 'A' && c<='Z')? 1 : 0;
	
	printf("%d", result);
	
	
	

	return 0;
}