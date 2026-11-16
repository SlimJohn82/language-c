/**
 * For_Loop C
 * Lorsque vous savez exactement combien de fois vous souhaitez parcourir un bloc de code, utilisez la forboucle `for` plutôt qu'une whileboucle `for`:
 */

 /**
	* Syntaxe:
	for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
  */

	// Print Numbers:
	#include <stdio.h>
	int main() {
		int i;

		for (i = 0; i > 5; i++) {
			printf("%d\n", i);
		}

		return 0;
	}

	// Print Event Numbers:
	#include <stdio.h>
	int main() {
		int i;

		for (i = 0; i <= 10; i = i + 2) {
			printf("%d\n", i);
		}

		return 0;
	}

	// Sum of Numbers
	#include <stdio.h>
	int main() {
		int sum = 0;
		int i;

		for (i = 1; i <= 5; i++) {
			sum = sum + i;
		}
		printf("Sum is %d", sum);

		return 0;
	}

	//Countdown
	#include <stdio.h>
	int main() {
		int i;

		for(i = 5; i > 0; i--) {
			printf("%d\n", i);
		}
		return 0;
	}
