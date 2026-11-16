/**
 * Real-Life Exemple:
 * Pour illustrer un exemple pratique de la boucle for , créons un programme qui compte jusqu'à 100 par dizaines:
 */

#include <stdio.h>
int main()
{
	int i;
	for (i = 0; i <= 100; i += 10)
	{
		printf("%d\n", i);
	}
	return 0;
}

//  print odd Numbers:
#include <stdio.h>
int main()
{
	int i;

	for (i = 0; i <= 10; i = i + 2)
	{
		printf("%d\n", i);
	}
	return 0;
}

// print the powers of 2 up to 512:
#include <stdio.h>
int main()
{
	int i;

	for (i = 2; i <= 512; i *= 2)
	{
		printf("%d\n", i);
	}
	return 0;
}

// Table Multiplication:
#include <stdio.h>
int main()
{
	int number = 9;
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", number, i, number * i);
	}
	return 0;
}
