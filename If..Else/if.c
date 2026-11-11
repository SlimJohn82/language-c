/**
 * Conditions and If Statements
 * Vous savez déjà que le langage C prend en charge des conditions de comparaison familières issues des mathématiques, telles que.
 * Inférieur à : a < b,
 * Inférieur ou égal à : a <= b,
 * Supérieur à : a > b,
 * Supérieur ou égal à : a >= b,
 * Égal à : a == b,
 * Différent de : a != b.
 */

/**
 * Vous pouvez utiliser ces conditions pour réaliser différentes actions selon les décisions prises.

Le langage C comporte les instructions conditionnelles suivantes :

Utilisez cette fonction ifpour spécifier un bloc de code à exécuter si une condition spécifiée est remplie.true
Utilisez cette fonction elsepour spécifier un bloc de code à exécuter si la même condition est remplie.false
Utilisez cette fonction else ifpour spécifier une nouvelle condition à tester, si la première condition est…false
À utiliser switchpour spécifier plusieurs blocs de code alternatifs à exécuter.
 */

// Notez que « » ifest écrit en minuscules. Les majuscules (« » Ifou «IF ») généreront une erreur.
#include <stdio.h>
int main()
{
	if (20 > 18)
	{
		printf("20 is greater than 18");
	}
	return 0;
}

// 2nd exemple:

#include <stdio.h>
int main()
{
	int x = 20;
	int y = 25;

	if (x > y)
	{
		printf("x is greater than y");
	}
	return 0;
}

// Using Boolean Variable:

#include <stdio.h>
#include <stdbool.h>
int main()
{
	int x = 20;
	int y = 18;

	bool isGreater = x > y;

	if (isGreater)
	{
		printf("x is greater than y");
	}
	return 0;
}

// Note: N'oubliez pas d'inclure les variables <stdbool.h> lorsque vous travaillez avec boolelles.
