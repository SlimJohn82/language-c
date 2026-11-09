/**
 * Comparison Operators
 * Les opérateurs de comparaison servent à comparer deux valeurs (ou variables). C'est important en programmation, car cela nous aide à trouver des réponses et à prendre des décisions.
 * La valeur de retour d'une comparaison est soit 1` true` (` true` ), soit 0` false` (` false` ). Ces valeurs sont appelées valeurs booléennes ; vous en apprendrez davantage à leur sujet dans les chapitres consacrés aux booléens et aux instructions `if...else` .10
 * Dans l'exemple suivant, nous utilisons l' opérateur supérieur à> ( ) pour déterminer si 5 est supérieur à 3.
 */

#include <stdio.h>
int main()
{
	int x = 5;
	int y = 3;
	printf("%d", x > y); // returns 1 (true) because 4 is greater than 3.
	return 0;
}

/**
 * Operator	Name	Example	Description	Try it
==	Equal to	x == y	Returns 1 if the values are equal
!=	Not equal	x != y	Returns 1 if the values are not equal
>	Greater than	x > y	Returns 1 if the first value is greater than the second value
<	Less than	x < y	Returns 1 if the first value is less than the second value
>=	Greater than or equal to	x >= y	Returns 1 if the first value is greater than, or equal to, the second value
<=	Less than or equal to	x <= y	Returns 1 if the first value is less than, or equal to, the second value
 */

// Real-Life;
#include <stdio.h>
int main()
{
	int age = 44;

	printf("%d\n", age >= 44);
	printf("%d\n", age < 44);
	return 0;
}
