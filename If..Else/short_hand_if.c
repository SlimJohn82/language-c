/**
 * Short Hand If...Else (Ternary Operator)
 * Il existe également une notation abrégée if...else, appelée opérateur ternaire car elle utilise trois opérandes.
 * L'opérateur ternaire renvoie une valeur en fonction d'une condition : si la condition est vraie true, il renvoie la première valeur,
 * sinon, il renvoie la deuxième valeur.
 *
 * Il peut être utilisé pour remplacer plusieurs lignes de code par une seule ligne,
 * et est souvent utilisé pour remplacer if...else des instructions simples:
 */

#include <stdio.h>
int main()
{
	int time = 20;

	if (time < 18)
	{
		printf("Good day.");
	}
	else
	{
		printf("Good evening.");
	}
	return 0;
}

// 2e exemple en une seule ligne.

#include <stdio.h>
int main()
{
	int time = 20;

	(time < 18) ? printf("Good day.") : printf("Good evening");

	return 0;
}

/**
 * 3e exemple: L'opérateur ternaire est particulièrement utile pour choisir entre deux valeurs.
 * Dans cet exemple, il détermine le plus grand des deux nombres.
 */

 #include <stdio.h>
 int main() {
		int a = 10;
		int b = 20;
		int max = (a > b) ? a : b;

		printf("The largest number is %d", max);
		return 0;
 }
