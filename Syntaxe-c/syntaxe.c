#include <stdio.h> // Rend le printf disponible

int main()
{												 // Le programme commence ici:
	printf("Hello World"); //
	return 0;							 // le programme est terminé/
} // fin de main

/**
 * Exemple expliqué
Ligne 1 : #include <stdio.h> indique à C d’inclure un fichier d’en-tête . Cet en-tête nous permet d’utiliser des fonctions d’entrée/sortie telles que printf()(utilisée à la ligne 4).

Ne vous inquiétez pas si vous ne comprenez pas comment cela  #include <stdio.h>fonctionne. Considérez simplement que c'est quelque chose qui apparaît (presque) toujours dans votre programme.

Ligne 2 : Une ligne vide. Le langage C ignore les espaces supplémentaires et les lignes vides, mais nous les utilisons pour faciliter la lecture du code.

Ligne 3 : main() est une fonction spéciale. Votre programme commence à s’exécuter ici. Tout code situé entre accolades {}sera exécuté.

Le mot int« before » main()signifie que la fonction renvoie un nombre entier lorsqu'elle se termine. Ce nombre est la 0valeur de « in » return 0(ligne 5).

Ligne 4 : printf() est une fonction utilisée pour afficher (imprimer) du texte à l’écran. Dans notre exemple, elle affiche «Hello World! . »

Remarque : Chaque instruction C se termine par un point-virgule;

Remarque : Le corps de la phrase int main()pourrait également s'écrire comme suit :
int main(){printf("Hello World!");return 0;}

N'oubliez pas : le compilateur ignore les espaces supplémentaires et les sauts de ligne, mais l'utilisation de plusieurs lignes facilite la lecture du code.

Ligne 5 : return 0 termine la main()fonction et renvoie une valeur au système d’exploitation.

Le terme « retour » 0signifie généralement que « tout a fonctionné ». Vous en apprendrez davantage sur les valeurs de retour ultérieurement.

Ligne 6 : N’oubliez pas l’accolade fermante }pour terminer la main()fonction.
 */
