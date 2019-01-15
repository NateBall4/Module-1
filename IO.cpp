/*
Author: Mark Dencler
Description: Demonstration of C format string used to specify
			 field widths, precision, and justification for
			 integer output.
*/
#include <stdio.h>

int main() {
	// special escape sequence %
	// to display a percentage sign on the console, we must use the special
	// escape sequence, %%, in the format string
	printf("%%\n");

	int exInt = 55;
	double exDbl = 123.456789;

	// INTEGER CODING FORMAT - "%<alignment><field-width>d"
	// we can specify a field width for integer output
	// note: the default justificaion is "right"
	printf("%6d\n", exInt);

	// we can override the right justification with the
	// negative sign (-)
	printf("%-6d\n", exInt);

	// note that the field width is still in place even
	// though we can't see the spaces
	printf("%-6d%-6d%-6d%-6d\n", exInt, exInt, exInt, exInt);

	// FLOATING POINT FORMAT - "%<alignment><field-width>.<precision>f"
	// we can specify output formatting for floating-point
	// representations in a similar way, except we may also
	// specify a precision
	printf("%10.3f\n", exDbl);
	printf("%11.3f\n", exDbl);
	printf("%12.3f\n", exDbl);
	printf("%12.5f\n", exDbl);
	printf("%-12.5f%-12.5f%-12.5f\n", exDbl, exDbl, exDbl);

	return 0;
}
