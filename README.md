Structured programming basics
Section A
Questions and their solutions:
1.	Write a C program to SWAP (interchange) 2 numbers without using third variable (filename: two_swap.c)

 README: 

Swapping Values Without Using a Third Variable

Description:
This C program demonstrates how to swap the values of two variables without using a third variable. The program takes two integer values, a and b, and swaps their values using arithmetic operations.
	Initialize two integer variables a and b 
	To swap the values:
-	Add a and b and store the result in a (a = a + b).  
-	Subtract the original value of b from the updated value of a and store the result in b (b = a - b).
-	Subtract the original value of a from the updated value of b and store the result in a (a = a - b).
	Print the swapped values of a and b.

Compilation and Execution:
-	Save the code to a file named swap_values.c.
-	Compile the code using the following command: gcc two_swap.c -o swap
-	Execute the compiled binary: ./swap

-	The output will display the swapped values of a and b.

2.	Write a C program to calculate the remainder of 2 numbers without using % operator (filename: remainder.c)

README:  
To Calculate Remainder Without Using % Operator

Description:
This C program demonstrates how to calculate the remainder of two integers without using the modulo operator (%). It defines a function calculate remainder that iteratively subtracts the divisor from the dividend until the dividend becomes less than the divisor. The remaining value is the remainder.

Code Explanation
The program includes the standard input/output library (<stdio.h>).
The calculate_remainder function takes two integer arguments (a and b) and returns the remainder of a divided by b. Inside the calculate_remainder function:
A while loop is used to repeatedly subtract b from a until a becomes less than b.
The final value of a after the loop is the remainder.
In the main function:
The user is prompted to enter two numbers (a and b).
The calculate_remainder function is called with the input values.
The remainder is printed to the console.
Usage

Compilation and Execution

 Save the code to a file named remainder.c
gcc  remainder.c -o rem
Run the compiled executable     
(./rem).
Enter two integer values when prompted.
The program will calculate and display the remainder.
Example
Suppose you compile and run the program, and you input a = 15 and b = 4. The output will be:

Enter two numbers: 15 4
Remainder: 3 

3.	Write a C program to calculate the sum of digits of a three-digit number e.g.125 is 8 (filename: sum.c)

README:  
 Description:
This C program calculates the sum of digits of a three-digit number entered by the user. It prompts the user to input a three-digit number, extracts the individual digits, and computes their sum.

Explanation:
	The program starts by declaring necessary variables: number, digit1, digit2, digit3, and sum_of_digits.
	The user is prompted to input a three-digit number using printf.
	The input is read using scanf and stored in the number variable.
	The program extracts the individual digits using the following formulas:
-	digit1 = number / 100 (to get the hundreds place digit)
-	digit2 = (number / 10) % 10 (to get the tens place digit)
-	digit3 = number % 10 (to get the ones place digit)
	The sum of digits is calculated as sum_of_digits = digit1 + digit2 + digit3.
	Finally, the program displays the result using printf.

Example: Suppose the user enters the number “456”:
-	digit1 will be “4” (hundreds place digit)
-	digit2 will be “5” (tens place digit)
-	digit3 will be “6” (ones place digit)
-	The sum of digits will be “15”.

Compilation and Execution:
-	Save the code to a file named sum.c
-	Compile the code using the following command: gcc sum.c -o sum
-	Execute the compiled binary: ./sum


4.	Write a C program to print the reverse of a 3-digit number. (filename: reverse.c)

README:
Reverse of a 3-Digit Number

This C program reads a 3-digit number from the user and prints its reverse.
	How to Compile and Run

-	Make sure you have a C compiler installed (e.g., gcc).
-	Open a terminal or command prompt.
-	Navigate to the directory containing the reverse.c file.
-	Compile the program using the following command:

bash
gcc  reverse -o rev reverse.c


	Run the compiled program:

Program Description
-	The program prompts the user to enter a 3-digit number.
-	It reads the input from the user.
-	The program calculates the reverse of the number.
-	Finally, it prints the reversed number.

For Example 

Enter a 3-digit number: 123
Reversed number: 321

Section B
Problem 2:




README:

 Credit Card Balance Calculator

This program calculates the minimum fixed monthly payment needed to pay off a credit card balance within 12 months.

Variables:

-	balance: The outstanding balance on the credit card.
-	annualInterestRate: The annual interest rate as a decimal.

Calculation:

The program calculates the monthly interest rate, monthly unpaid balance, and updated balance each month using the following formulas:

	Monthly interest rate = (Annual interest rate) / 12.0
	Monthly unpaid balance = (Previous balance) - (Minimum fixed monthly payment)
	Updated balance each month = (Monthly unpaid balance) + (Monthly interest rate x Monthly unpaid balance)

Compilation and Execution.


Structured Programming Basics 
 
            Below, will be solution to various problems and explanation of codes. The codes are written and compile in ubuntu. 
Section: A
5. Write a C program to check whether a 3-digit number is a magic number or
not. (Palindrome) A number is a magic number if its reverse is same as the
original number. (filename: magic_number.c)
#include <stdio.h>

int main() {
	    int number, originalNumber, reversedNumber = 0, remainder;

	        printf("Enter a 3-digit number: ");
		    scanf("%d", &number);
		        originalNumber = number;

			    // Reverse the number
			    while (number != 0) {
			    remainder = number % 10;
			    reversedNumber = reversedNumber * 10 + remainder;
			    number /= 10;
			     }
			  
			     if (originalNumber == reversedNumber) {
			     printf("%d is a magic number (palindrome).\n", originalNumber);
			     } else {
	                     printf("%d is not a magic number.\n", originalNumber);
			      }
			    
			     return 0;
			      }
Explanation:
	We take input from the user for a 3-digit number.
	We store the original number for later comparison.
	We extract the last digit using the modulus operator.
	We remove the last digit by dividing the number by 10.
	We calculate the sum of the remaining digits.
	Finally, we compare the sum with the original number to determine if it’s a magic number.
Compilation and Execution
Save the code to a file name magic_number.c.gcc magic_number.c -o mn compile executable 
(./mn). Enter a 3-digit number and when prompted, the program will display weather it is a magic number or not. Example, input:456. Output: 456 is not a magic number.
  
6. Any character is entered through the keyboard, Write a C program to
determine whether the character entered is a capital letter, a small case letter,
a digit or a special symbol. (filename: character.c)
#include <stdio.h>

int main() {
	    char ch;

	        // Read a character from the user
		  printf("Enter a character: ");
		 scanf("%c", &ch);
		
		 // Check if the character is an uppercase letter
		 if (ch >= 'A' && ch <= 'Z') {
		 printf("%c is an uppercase letter.\n", ch);
	         }
		 // Check if the character is a lowercase letter
                 else if (ch >= 'a' && ch <= 'z') {
		 printf("%c is a lowercase letter.\n", ch);
		 }
		 // Check if the character is a digit
	         else if (ch >= '0' && ch <= '9') {
		 printf("%c is a digit.\n", ch);
		 }
	        // If none of the above conditions are true, it is a special symbol
		 else {
		 printf("%c is a special symbol.\n", ch);
		 }
		
		 return 0;
		 }
	
Explanation:
	We declare a variable ch to store the input character.
	The printf statement prompts the user to enter a character.
	The scanf function reads a character from the user.
	We use conditional statements (if, else if, and else) to determine the type of character based on its ASCII value:
•	If the ASCII value falls within the range of uppercase letters ('A' to 'Z') or lowercase letters ('a' to 'z'), we classify it as an alphabet.
•	If the ASCII value is between '0' and '9', it’s a digit.
•	Otherwise, it’s considered a special character.
Compilation and Execution
Save the code to a file name:character.c.gcc character.c -o ch compile executable 
(./ch). Enter a character and when prompted, the program will display lower case or otherwise. Example, input:e. Output: lower case.

7.	Write a C program to print the table of n. (filename: time_table.c)

#include <stdio.h>

int main() {
	    int n, i;

	        // Input the value of 'n'
	        printf("Enter a number: ");
	        scanf("%d", &n);
		
	        // Print the table of 'n'
	        printf("Table of %d:\n", n);
	       for (i = 1; i <= 10; i++) {
	       printf("%d x %d = %d\n", n, i, n * i);
		 }
		
		 return 0;
		 }	    
	Explanation:	 
	We declare an integer variable n to store the user input.
	The printf statement prompts the user to enter an integer.
	The scanf function reads the user input and stores it in n.
	The for loop runs from i = 1 to i = 10.
	Inside the loop, we calculate the product of n and i using n * i and print the result. 
Compilation and Execution
Save the code to a file name:time_table.c.gcc time_table.c -o tt compile executable 
(./tt). Enter a number and when prompted, the program will display a table of the number. Example, input:12. Output: 12*1=12.

8. Write a function that returns the value of x raised to the power of y. (filename:
power.c)
	- Prototype: int _pow_recursion(int x, int y);
	- If y is lower than 0, the function should return -1
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
        printf("Error: Exponent cannot be negative.\n");
    else
        printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
Explanation:
	The _pow_recursion function is defined to calculate x raised to the power of y.
	The base case checks if y is 0, in which case it returns 1 (since any number raised to the power of 0 is 1).
	If y is negative, the function returns -1 (as specified).
	Otherwise, it recursively multiplies x by the result of _pow_recursion(x, y - 1).
Compilation and Execution
Save the code to a file name:power.c. gcc power.c -o pw compile executable 
(./pw). Enter the base(x), Enter the exponents(y) and when prompted, the program will multiplile the base raise to the power of the exponent. Example, input: base:12 and exponent:2. Output: 24



	Save the code to a file named problem_2.c
	Compile the code using the following command: 
gcc problem_2.c -o problem
	Execute the compiled binary: ./problem
   
	The output will display the lowest payment.

Output:

The program prints out the lowest monthly payment that will pay off all debt in under 1 year. The monthly payment is a multiple of 10FCFA and is the same for all months. It is possible for the balance to become negative using this payment scheme, which is okay.

Test Cases:

Test Case 1: 
-	balance = 3329 
-	annualInterestRate = 0.2 

Result Your Code Should Generate: Lowest Payment: 310
Test Case 2:
-	balance = 4773
-	annualInterestRate = 0.2

Result Your Code Should Generate: Lowest Payment: 440

Test Case 3:
-	balance = 3926
-	annualInterestRate = 0.2

Result Your Code Should Generate: Lowest Payment: 360



