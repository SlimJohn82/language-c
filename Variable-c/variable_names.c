/**
 * C Variable Names
 * Toutes les variables C doivent être identifiées par des noms uniques.
 * Ces noms uniques sont appelés identifiants.
 * Les identifiants peuvent être des noms courts (comme x et y) ou des noms plus descriptifs (âge, somme, volume total).
 * Remarque : Il est recommandé d’utiliser des noms descriptifs afin de créer un code compréhensible et maintenable :
 */

#include <stdio.h>
int main()
{
	// Good variable name
	int minutesPerHour = 60;

	// OK, but not so easy to understand what m actually is:
	int m = 60;
	printf("%d\n", minutesPerHour);
	printf("%d\n", m);
	return 0;
}

/**
 * Les règles générales pour nommer les variables sont les suivantes :

Les noms peuvent contenir des lettres, des chiffres et des traits de soulignement.
Les noms doivent commencer par une lettre ou un trait de soulignement (_).
Les noms sont sensibles à la casse ( myVaret myvarsont des variables différentes).
Les noms ne peuvent pas contenir d'espaces ni de caractères spéciaux comme !, #, %, etc.
Les mots réservés (tels que int) ne peuvent pas être utilisés comme noms
 */
