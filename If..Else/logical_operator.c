/**
 * Logical Operators in Condition
 * Vous pouvez combiner ou inverser des conditions à l'aide d'opérateurs logiques.
 * Ceux-ci fonctionnent de concert avec if, else, et else if pour construire des décisions plus complexes.
 *
 * &&(ET) - toutes les conditions doivent être vraies.
 * ||(OU) - au moins une condition doit être vraie.
 * !(NON) - inverse une condition ( true→ false, false→ true)
 */

/**
 * Et (&&)
 * Utilisez la fonction ET ( &&) lorsque les deux conditions doivent être vraies:
 */

#include <stdio.h>
int main()
{
	int a = 200;
	int b = 33;
	int c = 500;

	if (a > b && c > a)
	{
		printf("Both conditions are true\n");
	}
	return 0;
}

/**
 * OU (||)
 * Utilisez ou (||) lorqu'au moins une des conditions peut-être vrais.
 */

#include <stdio.h>
int main()
{
	int a = 200;
	int b = 35;
	int c = 500;

	if (a > b || a > c)
	{
		printf("At least condition is true\n");
	}
	return 0;
}

/**
 * Pas (!)
 * L'operation NOT(!) inverse une condition:
 * Si une condition est true, ! la rend false.
 * Si une condition est false, ! la rend true.
 */

#include <stdio.h>

int main()
{
	int a = 35;
	int b = 200;

	if (!(a > b))
	{
		printf("a is NOT greater than b\n");
	}

	return 0;
}
