/**
 * Arithmetic Operators
 * +	Addition	Adds together two values	x + y
 * -	Subtraction	Subtracts one value from another	x - y
 * *	Multiplication	Multiplies two values	x * y
 * /	Division	Divides one value by another	x / y
 * %	Modulus	Returns the division remainder	x % y
 * ++	Increment	Increases the value of a variable by 1	++x
 * --	Decrement	Decreases the value of a variable by 1	--x
 */

// Operators Arithmetic
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 5;

	printf("%d\n", x + y); // 15
	printf("%d\n", x - y); // 5
	printf("%d\n", x * y); // 50
	printf("%d\n", x / y); // 5
	printf("%d\n", x % y); // 1

	int z = 5;
	++z;
	printf("%d\n", z); // 6
	printf("%d\n", z); // 5

	return 0;
}

// Operators Float
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 3;
	printf("%d\n", a / b); // Integer division, result is 3.

	double c = 10.0;
	double d = 3.0;
	printf("%f\n", c / d); // Decimal division, result is 3.33.

	return 0;
}

// Incrementating and Decrementing
#include <stdio.h>
int main()
{
	int x = 5;

	++x;							 // Increment xby 1.
	printf("%d\n", x); // 6.

	return 0;
}

#include <stdio.h>
int main()
{

	int x = 5;
	--x;							 // Decrement x by 1.
	printf("%d\n", x); // 4

	return 0;
}

#include <stdio.h>
int main()
{

	int x = 5;
	++x; // Increment x by 1.
	--x; // Decrement x by 1.

	printf("%d\n", x); // 5

	return 0;
}
