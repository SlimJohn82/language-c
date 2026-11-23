/**
 * Loop Through a String
 * Vous pouvez également parcourir les caractères d'une chaîne de caractères à l'aide d'une for boucle.
 */

 #include <stdio.h>
 int main() {
	char carName[] = "Porshe";
	int i;

	for(i = 0; i < 5; ++i) {
		printf("%c\n", carName[i]);
	}
	return 0;
 }

 // Strings length:

 #include <stdio.h>
 int main() {
	char carName[] = "Ferrari";
	int length = strlen(carName);
	int i;

	for (i = 0; i < length; ++i) {
		printf("%c\n", carName[i]);
	}
	return 0;
 }
