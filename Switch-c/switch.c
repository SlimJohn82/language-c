/**
 * Switch Statement
 * Au lieu d'écrire de nombreusesif...else instructions, vous pouvez utiliser l' switchinstruction.
 * Cette switchinstruction sélectionne l'un des nombreux blocs de code à exécuter.
 */

/**
 * La syntaxe:
 switch (expression) {
 case x:
	 // code block
	 break;
 case y:
	 // code block
	 break;
 default:
	 // code block
}
 */

#include <stdio.h>

int main()
{
	int day = 5;

	switch (day)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thurday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	}
	return 0;
}

// The Default Keyword:

#include <stdio.h>
int main()
{
	int day = 4;

	switch (day)
	{
	case 6:
		printf("Today id Saturday");
		break;

	case 7:
		printf("Ttoday is Sunday");
	default:
		printf("Looking forward to the Weekend");
		break;
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int day = 6;

	switch (day)
	{
	case 6:
	case 7:
		printf("Week-end");
		break;

	default:
		printf("Week-day");
		break;
	}
	return 0;
}
