/**
 * The else Statement,
 * Utilisez cette elseinstruction pour spécifier un bloc de code à exécuter si la condition est vraie false.
 *
 */

#include <stdio.h>
int main()
{
	int time = 20;

	if (time < 18)
	{
		printf("Good Morning");
	}
	else
	{
		printf("Good Evening");
	}
	return 0;
}

/**
 * Using a Boolean Variable
 * Vous pouvez également stocker la condition dans une variable booléenne et l'utiliser dans l' if...elseinstruction. Cela peut rendre le code plus lisible.
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int time = 20;

	bool isDay = time < 18;

	if (isDay)
	{
		printf("Good Morning");
	}
	else
	{
		printf("Good evening");
	}
	return 0;
}
