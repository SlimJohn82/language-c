/**
 * Variables
 * Les variables sont des conteneurs permettant de stocker des valeurs de données, comme des nombres et des caractères.
 * On peut considérer une variable comme une boîte nommée où l'on stocke une valeur qui pourra être utilisée ultérieurement.
 * En C, les variables doivent avoir un type spécifique , qui indique au programme quel type de données la variable peut stocker.
 *
 * int- stocke des nombres entiers, tels que 123ou-123
 * float- stocke les nombres décimaux, tels que 19.99ou-19.99
 * char- Stocke un seul caractère, tel que 'a'ou 'B'. Les caractères sont entourés de guillemets simples.
 */

/**
 * Declaring (Creating) Variables
 Pour créer une variable, vous devez spécifier son type et lui donner un nom .

Vous pouvez également lui attribuer une valeur simultanément :

Syntaxe
type variableName = value;
Où type est l'un des types de données C (tel que int), et variableName est le nom que vous choisissez (par exemple x ou myNum ).

Le signe égal =est utilisé pour attribuer une valeur à la variable.

Pour créer une variable qui doit stocker un nombre, consultez l'exemple suivant :

Exemple
Créez une variable nommée myNum de type intet assignez-lui la valeur 15 :

int myNum = 15;
Vous pouvez également déclarer une variable d'abord et lui attribuer une valeur plus tard :

Exemple
// Declare a variable
int myNum;

// Assign a value later
myNum = 15;
 */

/**
 * Output Variables:
 * Vous avez appris dans le chapitre sur la sortie que vous pouvez imprimer du texte à l'aide de la printf()fonction :
 */

#include <stdio.h>
int main()
{
	printf("create variables");
	return 0;
}

/**
 * Dans de nombreux autres langages de programmation (comme Python , Java et C++ ),
 * on utilise généralement une fonction d'affichage pour afficher la valeur d'une variable.
 *  Cependant, cela n'est pas possible en C :
 */

#include <stdio.h>

int main()
{
	int myNum = 15;
	printf(myNum);
	return 0;

} // Uppercase
