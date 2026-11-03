// C Introduction

/**
 * Qu'est-ce que C ?
Le C est un langage de programmation généraliste créé par Dennis Ritchie aux Bell Labs en 1972.

Il est populaire car il est rapide, largement pris en charge et permet de comprendre le fonctionnement interne des programmes.

La principale raison de sa popularité est qu'il s'agit d'un langage fondamental dans le domaine de l'informatique.

Le langage C est étroitement lié à UNIX, car une grande partie d'UNIX a été écrite en C.
 */

/**
 * À quoi sert le C ?
Le langage C est souvent utilisé pour créer des programmes qui doivent s'exécuter rapidement et interagir étroitement avec l'ordinateur.

Les systèmes d'exploitation, tels que certaines parties de Windows, Linux et macOS
Programmes intégrés à des appareils tels que les voitures, les téléviseurs et les appareils électroniques domestiques
Logiciels qui doivent être rapides, notamment les bases de données et les outils système
Moteurs de jeux et programmes gérant les graphismes
Bibliothèques de base sur lesquelles s'appuient d'autres langages de programmation
 */

/**
 * Pourquoi apprendre le C ?
C'est l'un des langages de programmation les plus utilisés.
Si vous connaissez le C, vous n'aurez aucun problème à apprendre d'autres langages de programmation populaires tels que Java, Python, C++, C#, etc., car leur syntaxe est similaire.
Il vous aide à comprendre la mémoire, les performances et la façon dont les ordinateurs traitent les données.
Le langage C est très polyvalent ; il peut être utilisé aussi bien dans les applications que dans les technologies.
 */

/**
 * Différence entre C et C++
Le C++ a été développé comme une extension du C, et sa syntaxe est souvent similaire.
Le C est principalement un langage procédural (on construit des programmes avec des fonctions).
Le C++ prend en charge les classes et les objets (souvent utilisés pour la programmation orientée objet).
 */

/*
Exemple de codage en C.
*/

#include <stdio.h>
int main()
{
	char name[] = "John";
	printf("Hello %s", name);
	return 0;
}
