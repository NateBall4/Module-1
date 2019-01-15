/*
Author: Mark Dencler
Description: This program demonstrates declaring variables (integers,
             floating points, strings) and how to use the sizeof
			 keyword to display their byte widths on the system.
 */

#pragma warning (disable:4101)
#include <stdio.h>

int main() {
	// integer representations
	char a;
	short b;
	short int c;
	int d;
	long e;
	long int f;

	// floating point-representations
	float g;
	double h;
	long double i;

	// string
	char someString[30] = "ROAR... monsters!!";

	// use sizeof to display sizes
	printf("The size of a \"char\" is       : %d bytes\n", sizeof(a));
	printf("The size of a \"short\" is      : %d bytes\n", sizeof(b));
	printf("The size of a \"short int\" is  : %d bytes\n", sizeof(c));
	printf("The size of a \"int\" is        : %d bytes\n", sizeof(d));
	printf("The size of a \"long\" is       : %d bytes\n", sizeof(e));
	printf("The size of a \"long int\" is   : %d bytes\n", sizeof(f));
	printf("The size of a \"float\" is      : %d bytes\n", sizeof(g));
	printf("The size of a \"double\" is     : %d bytes\n", sizeof(h));
	printf("The size of a \"long double\" is: %d bytes\n", sizeof(i));
	printf("The size of the \"string\" is   : %d bytes\n", sizeof(someString));

	return 0;
}
