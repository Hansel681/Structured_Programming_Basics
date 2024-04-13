#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    digit1 = num % 10;
    num /= 10;
    digit2 = num % 10;
    digit3 = num / 10;
    printf("The reverse of the number is: %d%d%d\n", digit1, digit2, digit3);
    return 0;
}

