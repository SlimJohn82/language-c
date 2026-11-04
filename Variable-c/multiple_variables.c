/**
 * Declare Multiple Variables in C
 * To declare more than one variable of the same type, use a comma-separated list:
 */

#include <stdio.h>
int main()
{
	int x = 5, y = 6, z = 50;
	printf("%d", x + y + z);
	return 0;
}

/**
 * Remarque : Toutes les variables doivent être du même type. Vous ne pouvez pas mélanger les types dans une même déclaration.
 * Vous pouvez également attribuer la même valeur à plusieurs variables simultanément :
 */

#include <stdio.h>
int main()
{
	int x, y, z;
	x = y = z = 50;
	printf("%d", x + y + z);
}
