/**
 * Data Types-C
 * Comme expliqué dans le chapitre sur les variables , une variable en C doit être d'un type de données spécifié , et vous devez utiliser un spécificateur de format
 *  à l'intérieur de la printf()fonction pour l'afficher :
 */

#include <stdio.h>

int main()
{
	// Create variables
	int myNum = 5;					 // Integer (whole number)
	float myFloatNum = 6.99; // Float point number
	char myLetter = 'J';		 // Character

	// Print variables
	printf("%d\n", myNum);
	printf("%d\n", myFloatNum);
	printf("%d\n", myLetter);
}

/**
 * Basics Data Types
 * Le type de données spécifie la taille et le type d'informations que la variable stockera.
 * Dans ce tutoriel, nous nous concentrerons sur les plus basiques:
 *
 * Data Type	Size	Description	Example
 * int	2 or 4 bytes	Stores whole numbers, without decimals	1
 * float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	1.99
 * double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	1.99
 * char	1 byte	Stores a single character/letter/number, or ASCII values	'A'
 */

/**
 * Basic Format Specifiers
 * There are different format specifiers for each data type. Here are some of them:
 * %d or %i	int
 * %f or %F	float
 * %lf	double
 * %c	char
 * %s	Used for strings (text), which you will learn more about in a later chapter
 */
