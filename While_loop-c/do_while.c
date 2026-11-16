/**
 * The Do/While Loop
 * Cette do/whileboucle est une variante de la whileboucle. Elle exécutera le bloc de code une première fois, avant de vérifier si la condition
 * est vraie, puis elle répétera la boucle tant que la condition est vraie.
 */

/**
 * Syntaxe:
 do {
 // code block to be executed
}
while (condition);
 */

// Do while:
#include <stdio.h>
int main()
{
	int i = 0;

	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 5);

	return 0;
}

// Condition id False from the Start.
/**
 * Dans l'exemple ci-dessus, la condition i < 5était vraie au départ, la boucle s'est donc exécutée plusieurs fois. Mais que se passe-t-il si la condition est fausse dès le début ?
 * Dans l'exemple ci-dessous, la variable icommence à 10, la condition i < 5est donc immédiatement fausse - pourtant la do/whileboucle s'exécute tout de même une fois:
 */

#include <stdio.h>
int main()
{
	int i = 10;

	do
	{
		printf("i is %d\n", i);
		i++;
	} while (i < 5);

	return 0;
}

/**
 * Résumé
La do/while boucle s'exécute toujours au moins une fois, même si la condition est déjà fausse. Cela diffère d'une whileboucle classique, qui s'arrêterait complètement si la condition est fausse dès le départ.
Ce comportement s'avère do/whileutile lorsque vous souhaitez vous assurer qu'une action se produise au moins une fois, comme l'affichage d'un message ou la demande d'une saisie utilisateur.
 */

// saisi utilisateur
#include <stdio.h>
int main()
{
	int number;

	do
	{
		printf("Enter a positive number: ");
		scanf("%d", &number);
	} while (number > 0);
}
