/**
 * The Null Character
 * Chaque chaîne de caractères en C se termine par un caractère spécial : \0, connu sous le nom de caractère nul.
 * Il indique à C où se termine la chaîne.
 * Vous ne le voyez pas et vous n'avez pas besoin de l'écrire lorsque vous créez une chaîne de caractères avec des guillemets doubles,
 * car le langage C l'ajoute automatiquement.
 * C’est pourquoi la chaîne "Hello"utilise 6 caractères en mémoire, et non 5:
 */

 #include <stdio.h>
 int main() {
	char greetings[] = "Hello";
	printf("%zu", sizeof(greetings)); // 6:
	return 0;
 }

 // Differences

 #include <stdio.h>
 int main() {
	char greetings[] = {'H', 'e', 'l', 'l', 'o',  ' ', 'W', 'o', 'r', 'l', 'd', '0', '!'};
	char greetings2[] = "Hello World!";

	printf("%zu\n", sizeof(greetings));
	printf("%zu\n", sizeof(greetings2));

	return 0;
 }

 
