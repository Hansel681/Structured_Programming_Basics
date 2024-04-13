#include <stdio.h>
int main(){
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Befor swaping: a=%d, b=%d\n", a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping: a=%d, b=%d\n", a, b);
	return 0;
}
