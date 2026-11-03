/**
 * Comments in C
 * Les commentaires peuvent être utilisés pour expliquer le code C et le rendre plus lisible.
 * Il peut également être utilisé pour empêcher l'exécution lors du test de code alternatif.
 * Les commentaires sont ignorés par le compilateur, ils n'ont donc aucune incidence sur le résultat de votre programme.
 */

/**
 * Single-line Comments
Les commentaires sur une seule ligne commencent par deux barres obliques ( //).
Tout texte situé entre //et la fin de la ligne est ignoré par le compilateur.
Cet exemple utilise un commentaire sur une seule ligne avant une ligne de code :
 */

#include <stdio.h>
// This is a comments
int main()
{
	printf("Hello World");
	return 0;
}

/**
 * Multi-line Comments
 Les commentaires multilignes commencent par /*et se terminent par
Tout texte situé entre /*et */
/*sera ignoré par le compilateur */

#include <stdio.h>
/*The code below will print the words Hello World!
to the screen , and it is amazing */
int main()
{
	printf("Hello World");
	return 0;
}

/**
 * Single or multi-line comments?
 * It is up to you which you want to use. Normally, we use // for short comments and /* for longer comments.
	 Good to know: Before C99 (released in 1999), you could only use multi-line comments in C. */

/**
 * What the Compiler Sees
 Les commentaires sont destinés aux personnes qui lisent votre code, et non à l'ordinateur.
 Ils permettent d'expliquer le fonctionnement de votre programme, mais n'ont aucune incidence sur son exécution.
Lors de la compilation de votre programme, les commentaires sont ignorés.
Voici un programme avec quelques commentaires utiles. Changez d'affichage pour voir le code sans les commentaires :
 */
