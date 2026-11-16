/**
 * Nested Loops
 * Il est également possible de placer une boucle à l'intérieur d'une autre boucle. On parle alors de boucle imbriquée.
 * La « boucle interne » sera exécutée une fois pour chaque itération de la « boucle externe. »
 */

#include <stdio.h>
int main()
{
	int i, j;

	// Outer loop
	for (i = 1; i <= 2; i++)
	{
		printf("Outer: %d\n", i); // Executes 2 times.
		for (j = 1; j <= 3; ++j)
		{
			printf(" Inner: %d\n", j); // Executes 6 times (2 * 3)
		}
	}
	return 0;
}

// Multiplication Table
#include <stdio.h>
int main()
{
	int i, j;

	for (i = 1; i <= 3; i++)
		;
	{
		for (j = 1; j <= 3; j++)
		{
			printf("%d", i * j);
		}
		printf("\n");
	}
	return 0;
}
