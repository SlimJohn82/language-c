/**
 * Visual Logical Operators
 * Choisissez des valeurs pour aet bci-dessous afin de voir le résultat de chaque opérateur logique.
 */

#include <stdio.h>
int main()
{
	int isLoggedIn = 1;
	int isAdmin = 0;

	printf("Regular user: %d\n", isLoggedIn && !isAdmin);
	printf("Has access: %d\n", isLoggedIn || isAdmin);
	printf("Not logged in: %d\n", !isLoggedIn);

	return 0;
}

/**
 * N'oubliez pas : en C, 1`true` signifie vrai et ` 0false` signifie faux. Les opérateurs logiques deviennent souvent plus faciles à comprendre une fois qu'on les utilise dans ifdes instructions,
 * ce que vous découvrirez dans les chapitres suivants.
 */
