/**
 * String:
 * Les chaînes de caractères servent à stocker du texte/des caractères.
 * Par exemple, « Hello World » est une chaîne de caractères.
 * Contrairement à de nombreux autres langages de programmation, le C ne possède pas de type String permettant de créer facilement des variables de type chaîne de caractères. Il faut donc utiliser le chartype `string`
 *  et créer un tableau de caractères pour former une chaîne en C.
 */

 // Access Strings

 #include <stdio.h>
 int main() {
	char greetings[] = "Hello World!";
	printf("%c", greetings[0]);

	return 0;
 }

 // Modify Strings

 #include <stdio.h>
 int main() {
	char greetings[] = "Hello World!";
	greetings[0] = 'M';
	printf("%s", greetings);

	return 0;
 }

 // Real-Life

 #include <stdio.h>
 int main() {
	char message[] = "Good to see you,";
	char fname[] = "Maelle";

	printf("%s %s!", message, fname);

	return 0;
 }
