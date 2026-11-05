/**
 * Set Decimal Precision
 * Vous avez probablement déjà remarqué que si vous imprimez un nombre à virgule flottante,
 * le résultat affichera de nombreux chiffres après la virgule :
 */

#include <stdio.h>

// Float and Double
int main()
{
	float myFloatNum = 3.5;
	double myDoubleNum = 19.82;

	printf("%f\n", myFloatNum);
	printf("%lf", myDoubleNum);
	return 0;
}

/**
 * Si vous souhaitez supprimer les zéros supplémentaires (définir la précision décimale), vous pouvez utiliser un point ( .) suivi d'un nombre qui
 * spécifie le nombre de chiffres à afficher après la virgule décimale.
 */

#include <stdio.h>

// Float and Digits
int main()
{
	float myFloatNum = 3.5;

	printf("%f", myFloatNum);			// Default will show 6 digits after the decimal point
	printf("%.1f\n", myFloatNum); // Only show 1 digit
	printf("%.2f\n", myFloatNum); // Only show 2 digits
	printf("%.4f", myFloatNum);		// Only show 4 digits
	return 0;
}

/**
 * Rounding
 * Lorsque vous définissez la précision, le système printf()ne se contente pas de supprimer les chiffres supplémentaires.
 * Il arrondit le nombre à la valeur la plus proche.
 */

#include <stdio.h>
int main()
{
	float myNum = 3.55541;

	printf("%2f\n", myNum);	 // 3.14
	printf("%.3f\n", myNum); // 3.142 (rounded up)
	printf("%.0f", myNum);	 // 3
}

/**
 * 
 */
