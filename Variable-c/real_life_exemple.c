/**
 * Real-Life Example
 * Dans nos exemples, nous simplifions souvent les noms des variables pour qu'ils correspondent à leur type de données (myInt ou myNum pour intles types entiers, myChar pour charles types caractères, etc.).
 Ceci afin d'éviter toute confusion.
 *
 * Dans les programmes réels, les variables représentent souvent des données du monde réel.
 * L'exemple suivant contient des informations sur un étudiant universitaire.
 */

#include <stdio.h>

int main()
{
	// Create integer variables.
	int length = 4;
	int width = 6;
	int area;

	// Calcule the of a rectangle
	area = length * width;

	// Print the variables.
	printf("Length is: %d\n", length);
	printf("Width is: %d\n", width);
	printf("Area of the rectangle is: %d", area);

	return 0;
}
