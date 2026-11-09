/**
 * Operator Precedence:
 * Lorsqu'un calcul contient plus d'un opérateur, le langage C suit les règles d'ordre des opérations pour déterminer quelle partie calculer en premier.
 * Par exemple, la multiplication se fait avant l'addition.
 */

#include <stdio.h>
int mtain()
{
	int result1 = 2 + 3 * 4;	 // 2 + 12 = 14
	int result2 = (2 + 3) * 4; // 5* 4 = 20

	printf("%d\n", result1);
	printf("%d\n", result2);

	return 0;
}

/**
 * Conseil : Utilisez toujours des parenthèses ( )pour garantir que le calcul s’effectue dans l’ordre souhaité.
 * Cela rend également votre code plus lisible.
 */

 /**
	* Order of Operations
  * () - Parentheses
*, /, % - Multiplication, Division, Modulus
+, - - Addition, Subtraction
>, <, >=, <= - Comparison
==, != - Equality
&& - Logical AND
|| - Logical OR
= - Assignment
  */
