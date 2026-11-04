/**
 *  Format Specifiers in C
 * Les spécificateurs de format sont utilisés conjointement avec la printf()fonction pour imprimer les variables.
 * On peut considérer un spécificateur de format comme un espace réservé qui indique à C quel type de valeur sera imprimé.
 * Un spécificateur de format commence toujours par un signe de pourcentage %, suivi d'une lettre.
 * Par exemple, pour afficher la valeur d'une intvariable, utilisez le spécificateur de format %dentouré de guillemets doubles ( ""),
 *  à l'intérieur de la printf()fonction :
 */

#include <stdio.h>
int main()
{
	int myNum = 15;
	printf("%d", myNum);
	return 0;
}
// Fonctionnement : %d indique à C d'attendre une valeur entière et myNumfournit cette valeur.

#include <stdio.h>
int main()
{
	// Create variable
	int myNum = 15;					 // Integer (whole Number)
	float myFloatNum = 6.95; // floating Number
	char myLetter = 'J';		 // Character ()

	// Print variables
	printf("%d\n", myNum);
	printf("%d\n", myFloatNum);
	printf("%d\n", myLetter);
	return 0;
}

// Pour imprimer différents types dans une seule printf()fonction, vous pouvez utiliser ce qui suit:

#include <stdio.h>
int main()
{
	int myNum = 16;
	char myLetter = 'J';
	printf("My number is %d and myLetter is %c", myNum, myLetter);
	return 0;
}

/**
 * Print Values Without Variables
 * Vous pouvez également imprimer directement les valeurs sans les stocker dans des variables,
 *  à condition d'utiliser le spécificateur de format approprié :
 */

#include <stdio.h>
int main()
{
	printf("My favorite number is: %d\n", 15);
	printf("My favorite letter is: %c", 'J');
	return 0;
}

// Remarque : Il est généralement préférable d'utiliser des variables, car leur valeur peut être réutilisée et modifiée ultérieurement.
