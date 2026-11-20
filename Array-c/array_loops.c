/**
 * Loop Through an Array:
 * Vous pouvez utiliser une forboucle pour parcourir les éléments d'un tableau en spécifiant sa taille dans la condition de la boucle,
 * exemple, le tableau contient 4 éléments, donc on utilise `size` i < 4). Cependant, cette méthode n'est pas idéale
 */

 #include <stdio.h>
 int main () {
	int myNumbers[] = {25, 50, 75, 100};
	int i;

	for(i = 0; i < 4; i++ ) {
		printf("%d\n", myNumbers[i]);
	}
	return 0;
 }

 // Making Better Loops

 #include <stdio.h>
 int main() {
	int myNumbers[] = {25, 50, 75, 100};
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
	int i;

	for (i = 0; i < length; i++) {
		printf("%d\n", myNumbers[i]);
	}

	return 0;
 }
