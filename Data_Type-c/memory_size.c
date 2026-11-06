/**
 * Get the Memory Size.
 * Nous avons présenté dans le chapitre sur les types de données que la taille mémoire d'une variable varie en fonction de son type.
 * int	2 or 4 bytes
 * float	4 bytes
 * char	1 byte
 */

#include <stdio.h>
int main()
{
	int myInt;			 // 4 bytes.
	float myFloat;	 // 4 bytes.
	double myDouble; // 8 bytes.
	char myChar;		 // 1 byte.

	printf("%zu\n", sizeof(myInt));
	printf("%zu\n", sizeof(myFloat));
	printf("%zu\n", sizeof(myDouble));
	printf("%zu\n", sizeof(myChar));
}
