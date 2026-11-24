/**
 * Character Functions
 * Lorsque vous créez un mot de passe sur un site web, celui-ci vérifie souvent les caractères que vous saisissez :
 * y a-t-il un chiffre ? Y a-t-il une lettre majuscule ?
 *
 * En C, vous pouvez vérifier et modifier des caractères individuels grâce aux fonctions de caractères du <ctype.h>fichier d'en-tête. Pour les utiliser,
 * incluez ce fichier d'en-tête dans votre programme :
 */

 #include <stdio.h>
 #include <ctype.h>
 int main() {
	char c = '7';

	if (isdigit(c)) {
		printf("%c is a digit\n", c);
	}
	return 0;
 }

 /**
	* Check Characters
	* isalpha()	a letter	'a', 'Z';
	* isdigit()	a digit	'0', '7';
	* isalnum()	a letter or a digit	'a', '7';
	* isupper()	an uppercase letter	'A', 'Z';
	* islower()	a lowercase letter	'a', 'z';
	* isspace()	white space, like a space, a tab or a new line	' ', '\n'
  */

	// Example: letter and digit:
	#include <stdio.h>
	#include <string.h>
	#include <ctype.h>

	int main() {
		char text[] = "Room 42";
		int letters = 0;
		int digits = 0;
		int i;

		for (i = 0; i < strlen(text); i++) {
			if (isalpha(text[i])) {
				letters++;
			}else if (isdigit(text[i])) {
				digits++;
			}
		}

		printf("Letters: %d\n", letters);
		printf("Digits: %d\n", digits);
		return 0;
	}

	// Change Characters
	#include <stdio.h>
	#include <ctype.h>

	int main() {
		printf("%c\n", toupper('a'));
		printf("%c\n", tolower('B'));
		printf("%c\n", toupper('7'));
		return 0;
	}

	// Change Charactere 2:
	#include <stdio.h>
	#include <string.h>
	#include <ctype.h>

	int main() {
		char text[] = "Hello World";
		int i;

		for (i = 0; i < strlen(text); i++) {
			text[i] = toupper(text[i]);
		}
		printf("%s\n", text);
		return 0;
	}

	// Real-Life Example:
	#include <stdio.h>
	#include <string.h>
	#include <ctype.h>

	int main() {
		char password[] = "Secret42";
		int hasUpper = 0;
		int hasDigit = 0;
		int i;

		for (i = 0; i < strlen(password); i++) {
			if (isupper(password[i])) {
				hasUpper = 1;
			}
			if (isdigit(password[i])) {
				hasDigit = 1;
			}
		}

		if (hasUpper && hasDigit) {
			printf("The password is OK\n");
		} else {
			printf("The password is needs an uppercase letter and a digit\n");
		}
		return 0;
	}
