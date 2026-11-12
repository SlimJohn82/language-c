/**
 * Nested If
 * Vous pouvez également placer une ifinstruction à l'intérieur d'une autre if. On appelle cela une instruction if imbriquée.
 * Une condition imbriquée ifvous permet de vérifier une condition uniquement si une autre condition est déjà vérifiée true.
 */

// Nested if
#include <stdio.h>
int main()
{
	int x = 15;
	int y = 25;

	if (x > 10)
	{
		printf("x is greater than 10\n");

		// Nested if
		if (y > 20)
		{
			printf("y iss also greater than 20\n");
		}
	}
	return 0;
}

// Real-Like Nested if
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int age = 20;
	bool isCitizen = true;

	if (age >= 18)
	{
		printf("Old enough to vote \n");

		if (isCitizen)
		{
			printf("And you are a citizen, so you can vote!");
		}
		else
		{
			printf("But you must be a citizen to vote.\n");
		}
	}
	else
	{
		printf("Not old enough to vote.\n");
	}

	return 0;
}
