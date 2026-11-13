/**
 * Loop / Boucles
 * Les boucles peuvent exécuter un bloc de code tant qu'une condition spécifiée est vraie.
 * Les boucles sont pratiques car elles permettent de gagner du temps, de réduire les erreurs et de rendre le code plus lisible.
 */

 /**
	* Loop While
	* La whileboucle répète un bloc de code tant qu'une condition spécifiée est remplietrue:
	*
	* Syntaxe
	* while (condition) {
  // code block to be executed
}
  */

	#include <stdio.h>
	int main() {
		int i = 0;

		while (i < 5)
		{
			printf("%d\n", i);
			i++;
		}
		return 0;

	}

	// Countdown Example

	#include <stdio.h>
	int main() {
		int countdown = 3;

		while (countdown > 0) {
			printf("%d\n", countdown);
		}
		printf("Go!\n");

		return 0;
	}

	// While Loop With False Condition

	#include <stdio.h>
	int main() {
		int i = 10;

		while (i < 5)
		{
			printf("This will never be printed\n");
			i++;
		}
return 0;
	}
