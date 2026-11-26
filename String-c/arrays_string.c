/**
 * Arrays of Strings
 * Une chaîne de caractères est un tableau de caractères.
 * Lorsque vous souhaitez stocker une liste de mots, comme des noms ou des fruits.
 * En C, un tableau de chaînes de caractères est un tableau bidimensionnel de caractères:
 */

 #include <stdio.h>
 int main() {
	char fruits[3][10] = {"Apple", "Banana", "Cherry"};

	printf("%s\n", fruits[0]);
	return 0;
 }

 /**
	* Loop Through an Array of String
	* Use a for loop to print all the strings in the array.
  */

	#include <stdio.h>
	int main() {
		char fruits[3][10] = {"Apple", "Banana", "Cherry"};
		int i;

		for (i = 0; i < 3; i++) {
			printf("%s\n", fruits[i]);
		}
		return 0;
	}

	// Note: Ne pas utiliser strlen()ici. Cette fonction compte les caractères d’ une chaîne, et non le nombre de chaînes.

	// Other example Array strings.

	#include <stdio.h>
	int main() {
		char fruits[3][10] = {"Apple", "Banana", "Cherry"};
		int count = sizeof(fruits) / sizeof(fruits[0]);
		int i;

		printf("Number of strings: %d\n", count);

		for (i = 0; i < count; i++) {
			printf("%s\n", fruits[i]);
		}
		return 0;
	}

	// Real_example:
	#include <stdio.h>
	int main() {
	char guests[4][20] = {"Nihal", "Maëlle", "Remi", "John"};
	char name[] = "Maëlle";
	int found = 0;
	int i;

	for (i = 0; i < 4; i++) {
		if (strcmp(guests[i], name) == 0) {
			found = 1;
			break;
		}
}

	if (found) {
		printf("%s is on the guest list\n", name);
	} else {
		printf("%s is not on the gest list\n", name);
	}
	return 0;
}
