/*
Author: Mark Dencler
Description: This program demonstrates the declaration and initialization
             of assorted variable types with literal values.  The variables
			 are then used to demonstrate the use of common escape sequences
			 and conversion characters.
*/

#include <stdio.h>

int main() {
	int someInteger = 10;
	double someDouble = 10.0;
	char someCharacter = 'a';
	char someString[30] = "look out!";

	// display with conversion characters (%d, %f, %c, %s, %o, %x)
	printf("The value is: %d\n", someInteger);
	printf("%d %d %d\n", someInteger, someInteger + 1, 5);
	printf("The value is %f\n", someDouble);
	printf("The value is %.2f\n", someDouble);
	printf("%c %c\n", someCharacter, someCharacter + 1);
	printf(" %s \n", someString);
	someInteger = 18;
	printf("The value is: %o\n", someInteger);
	printf("The value is: %x\n", someInteger);

	// display with escape sequences (\n, \t, \\, \?, \", \')
	printf("Here is a line\n\nHere is another");
	printf("Here is something\tHere is something else\n");
	printf("\\\\\\\\\\\\\n");
	
	return 0;
}
