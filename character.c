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
	





