/**
 * Operators-C
 * Les opérateurs servent à effectuer des opérations sur les variables et les valeurs.
 * Dans l'exemple ci-dessous, nous utilisons l' + opérateur pour additionner deux valeurs.
 */

#include <stdio.h>
int main()
{
	int myNum = 100 + 50;
	printf("%d", myNum);
	return 0;
}

#include <stdio.h>
int main()
{
	int sum1 = 100 + 50;		// 150 (100 + 50).
	int sum2 = sum1 + 250;	// 400 (150 + 250).
	int sum3 = sum2 + sum2; // 800 (400 +400).

	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("%d\n", sum3);
	return 0;
}
