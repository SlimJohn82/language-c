/**
 * Numeric Types
 * Use int when you need to store a whole number without decimals, like 35 or 1000,
 * and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.
 */

// Decimal Number
#include <stdio.h>
int main()
{
	int myNum = 1000;
	printf("%d", myNum);
	return 0;
}

// Float Number
#include <stdio.h>
int main()
{
	float myNum = 6.85;
	printf("%f", myNum);
	return 0;
}

// Double Number
#include <stdio.h>
int main()
{
	double myNum = 19.82;
	printf("%lf", myNum);
	return 0;
}

/**
 * float contre double
 * La précision d'une valeur à virgule flottante indique le nombre de chiffres qu'elle peut stocker correctement, en comptant les chiffres avant et
 * après la virgule. La précision des nombres à virgule flottante floatest d'environ six ou sept chiffres, tandis que doublecelle des variables a
 * une précision d'environ 15 chiffres. Par conséquent, il est souvent plus sûr d'utiliser des nombres à virgule flottante doublepour la plupart des
 * calculs ; cependant, il faut noter qu'ils occupent deux fois plus de mémoire que floatles nombres à virgule flottante (8 octets contre 4 octets).
 */
