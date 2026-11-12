/**
 * If..Else example:
 * Real_life eamples:
 */

// doorCode:
#include <stdio.h>
int main()
{
	int doorCode = 1337;

	if (doorCode == 1337)
	{
		printf("Correct code.\n The door is now open.");
	}
	else
	{
		printf("Wrong code.\n The door remins closed.");
	}
	return 0;
}

/**
 * Le vote
 * avec if, else.
 */

#include <stdio.h>
int main()
{
	int myAge = 25;
	int votingAge = 18;

	if (myAge >= votingAge)
	{
		printf("Old enough to vote!");
	}
	else
	{
		printf("Not old enough to vote.");
	}
	return 0;
}

// Check temperature (Celsius):
#include <stdio.h>
int main()
{
	int temperature = 30;

	if (temperature < 0)
	{
		printf("It's frezing!\n");
	}
	else if (temperature < 20)
	{
		printf("It's cool.\n");
	}
	else
	{
		printf("It's warm\n");
	}
	return 0;
}
