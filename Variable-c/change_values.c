/**
 * Change Variable Values
 * Si vous attribuez une nouvelle valeur à une variable existante, la nouvelle valeur remplacera l' ancienne:
 */

#include <stdio.h>
int main()
{
	int myNum = 15; // myNum is 15
	myNum = 10;			// myNum now is 10
	printf("%d", myNum);
	return 0;
}

/**
 * Remarque : Ceci est normal et attendu. Les variables sont censées changer pendant l’exécution d’un programme.
 * Vous pouvez également affecter la valeur d'une variable à une autre :
 */

 #include <stdio.h>
 int main () {
	int myNum = 15;
	int myOtherNum = 23;
	//Assign the value of myOtherNum (23) to myNum
	myNum = myOtherNum;
	// myNum is now 23 instead of 15
	printf("%d", myNum);
	return 0;
 }


 /**
	* Add Variables Together
	* Vous pouvez utiliser des opérateurs mathématiques pour manipuler les variables.
	* Par exemple, pour additionner une variable à une autre, utilisez l' +opérateur:
  */

	#include <stdio.h>
	int main () {
		int x = 5;
		int y = 6;
		int sum = x + y;
		printf("%d", sum);
		return 0;
	}

	// Vous pouvez également mettre à jour une variable en utilisant sa valeur actuelle :

	#include <stdio.h>
	int main () {
		int x = 5;
		x = x + 1;
		printf("%d", x);
		return 0;
	}


	/**
	 * Swap two Variable
	 * Une tâche courante en programmation consiste à échanger les valeurs de deux variables.
	 * Pour cela, il vous faut une troisième variable qui stocke temporairement l'une des valeurs.
	 * C'est comme intervertir les boissons dans deux verres : il vous faut un troisième verre vide.
	 */

	 #include <stdio.h>
	 int main () {
		int a = 5;
		int b = 10;
		int temp;

		// Swap the values of a and b
		temp = a;
		a = b;
		b = temp;
		printf("a is %d, b is %d", a, b);
		return 0;
	 }
