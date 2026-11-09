/**
 * Assignment Operators:
 * Les opérateurs d'affectation servent à attribuer des valeurs aux variables.
 * Dans l'exemple ci-dessous, nous utilisons l' opérateur d'affectation ( =) pour affecter la valeur 10 à une variable appelée x.
 */

// Assignment:
#include <stdio.h>
int main()
{
	int x = 10;
	printf("%d", x);
	return 0;
}

// Assignment addition
#include <stdio.h>
int main()
{
	int x = 10;
	x += 5;
	printf("%d", x);
	return 0;
}

/**
 * Operator	Example	Same As	Try it
=	x = 5	x = 5
+=	x += 3	x = x + 3
-=	x -= 3	x = x - 3
*=	x *= 3	x = x * 3
/=	x /= 3	x = x / 3
%=	x %= 3	x = x % 3
&=	x &= 3	x = x & 3
|=	x |= 3	x = x | 3
^=	x ^= 3	x = x ^ 3
>>=	x >>= 3	x = x >> 3
<<=	x <<= 3	x = x << 3
 */
