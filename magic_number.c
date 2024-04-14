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
			    
			    
			    
			    
			    
			   
			   
			    
			   
			  
			    
			    
			    
			    
			    
			    
			    
			    
			    
			    
			   
			   
			   






















