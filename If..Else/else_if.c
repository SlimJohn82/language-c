/**
 * The else if Statement
 * Utilisez cette else ifinstruction pour spécifier une nouvelle condition à tester si la première condition est false
 * Vous pouvez l'utiliser else ifpour vérifier plusieurs conditions, l'une après l'autre.
 */

#include <stdio.h>
int main()
{
	int time = 16;

	if (time < 12)
	{
		printf("Good morning");
	}
	else if (time < 18)
	{
		printf("Good day");
	}
	else
	{
		printf("Good evening");
	}
	return 0;
}

/**
 * Exmple expliqué:
 * La valeur timeest 16. La première condition time < 12est fausse, mais la seconde time < 18est vraie. Par conséquent,
 * le code à l'intérieur du else if bloc s'exécute et « Bonjour » s'affiche.
 *
 * Si la valeur timeétait 22, aucune des conditions ne serait vraie et le programme afficherait plutôt « Bonsoir ».
 */
