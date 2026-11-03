/**
 * C New lines
 * Pour commencer une nouvelle ligne lors de l'impression de texte, vous pouvez utiliser le \ncaractère:
 */

#include <stdio.h>
int main()
{
	printf("Hello World\n");
	printf("Learning C");
	return 0;
}

/**
 * Vous pouvez également imprimer plusieurs lignes avec une seule printf()fonction. Cependant,
 * cela risque de rendre le code plus difficile à lire :
 */

#include <stdio.h>
int main()
{
	printf("Hello World\n I am Learning C\n And it in awsome!\n ");
	return 0;
}

/**
 * Astuce : Deux \ncaractères consécutifs créeront une ligne vide.
 */

#include <stdio.h>

int main()
{
	printf("Hello World \n\n");
	printf("I am Learning C.");
	return 0;
}

/**
 * Qu'est-ce que c'est \nexactement ?
 Les séquences d'échappement commencent par une barre oblique inverse,
et représentent des caractères spéciaux qui ne peuvent pas être saisis directement.
Dans ce cas, \ncela indique au programme de déplacer le curseur au début de la ligne suivante.
Voici quelques autres séquences d'échappement courantes :
 */
