/**
 * Character type C
 * Ce chartype de données est utilisé pour stocker un seul caractère.
 * Le caractère doit être entouré de guillemets simples, comme « A » ou « c », et nous utilisons le %cspécificateur de format pour l’imprimer.
 */

 #include <stdio.h>
 int main() {
	char myGarde = 'A';
	printf("%c", myGarde);
	return 0;
 }

 /**
	* Sinon, si vous connaissez l'ASCII (une norme qui attribue un numéro à chaque caractère), vous pouvez utiliser les valeurs ASCII pour afficher certains caractères.
	* Notez que ces valeurs ne sont pas entourées de guillemets ( ''« »), car ce sont des nombres :
  */

#include <stdio.h>
int main() {
	char a = 65, b = 66, c = 67;
	printf("%c\n", a);
	printf("%c\n", b);
	printf("%c\n", c);
	return 0;
}

// Conseil : Vous trouverez la liste de toutes les valeurs ASCII dans notre tableau de référence ASCII.

/**
 * Characters Are Store as Number
 * Dans l'ordinateur, chaque caractère est stocké sous forme de nombre. Par exemple, 1 'A'est stocké sous la forme 0 65.
 * Si vous imprimez un charavec %dau lieu de %c, vous voyez le nombre:
 */

 #include <stdio.h>
 int maun() {
	char myLetter = 'M';

	printf("%c\n", myLetter);  // M
	printf("%d", myLetter); // 77
	return 0;
 }
