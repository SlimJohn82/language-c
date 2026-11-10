/**
 * Booleans
 * Très souvent, en programmation, vous aurez besoin d'un type de données qui ne peut prendre que deux valeurs, comme:
 * OUI / NON
 * MARCHE / ARRÊT
 * VRAI / FAUX
 * Pour cela, le langage C possède un booltype de données appelé booléen.
 * Les booléens représentent l'une des deux valeurs suivantes : truevrai ou faux false.
 */

/**
 * Booleans Variables
 * En C, ce booltype n'est pas un type de données intégré, comme intou char.
 * Elle a été introduite dans C99, et vous devez inclure le fichier d'en-tête suivant pour l'utiliser :
 */

// Boolean: True / False:
#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool isProgrammingFun = true;
	bool isFishTasty = false;

	printf("%d\n", isProgrammingFun); // Returns 1 (true)
	printf("%d", isFishTasty);				// returns 0 (false)

	return 0;
}

// Comparison
#include <stdio.h>
int main()
{
	int x = 10;
	int y = 9;

	printf("%d", x > y);
	return 0;
}

// equal to:
#include <stdio.h>
int main()
{
	printf("%d\n", 10 == 10); // Return 1.
	printf("%d\n", 10 == 15); // Return 0.
	printf("%d", 5 == 55);		// Return 0.
}

// Comparison 2nd exemple.
#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool isHamburgerTasty = true;
	bool isPizzaTasty = true;

	printf("%d", isHamburgerTasty == isPizzaTasty);
}

// N'oubliez pas d'inclure le <stdbool.h>fichier d'en-tête lorsque vous travaillez avec booldes variables.

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x = 10;
	int y = 5;

	bool isGreater = x > y;
	printf("%d", isGreater);

	return 0;
}
