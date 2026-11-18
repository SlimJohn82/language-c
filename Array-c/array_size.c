/**
 * Get Array Size
 * Pour obtenir la taille d'un tableau, vous pouvez utiliser l' sizeofopérateur.
 */

 #include <stdio.h>
 int main() {
	int myNumbers[] = {10, 25, 50, 75, 100};
	printf("%zu", sizeof(myNumbers));

	return 0;
 }

 // Remarque : Pourquoi le résultat s'est-il affiché 20au lieu de 5, alors que le tableau contient 5 éléments?


 /**
	* Get the Number of Elements
	* Pour connaître le nombre d'éléments d'un tableau, vous pouvez utiliser cette formule,
	* qui divise la taille totale du tableau par la taille d'un élément :
  */

	#include <stdio.h>
	int main() {
		int myNumbers[] = {10, 25, 50, 75, 100};
		int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

		printf("%d", length);
		return 0;
	}
