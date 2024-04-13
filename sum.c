#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, sum_of_digits;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;
    sum_of_digits = digit1 + digit2 + digit3;
    printf("The sum of digits of %d is %d.\n", number, sum_of_digits);

    return 0;
}

