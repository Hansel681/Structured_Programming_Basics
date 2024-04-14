



















#include <stdio.h>

// Recursive function to calculate x raised to the power of y
 int _pow_recursion(int x, int y) {
 // Base case: if y is 0, return 1 (x^0 = 1)
 if (y == 0)
 return 1;

 // If y is negative, return -1 (since we don't handle negative exponents)
 if (y < 0)
 return -1;

 // Recursive case: multiply x by the result of (_pow_recursion(x, y-1))
 return x * _pow_recursion(x, y - 1);
 }

 int main() {
 int base, exponent;
 printf("Enter the base (x): ");
 scanf("%d", &base);
 printf("Enter the exponent (y): ");
 scanf("%d", &exponent);

 int result = _pow_recursion(base, exponent);
 if (result == -1)
 printf("-1\n");
 else
 printf("%d^%d = %d\n", base, exponent, result);

 return 0;
 }

