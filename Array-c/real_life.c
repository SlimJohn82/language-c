/**
 * Real-Life
 * Pour illustrer concrètement l'utilisation des tableaux, créons un programme qui calcule la moyenne d'âges différents.
 */

#include <stdio.h>
int main()
{
	// An array storing differebt ages.
	int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

	float avg, sum = 0;
	int i;

	// Get the length of the array
	int length = sizeof(ages) / sizeof(ages[0]);

	// Loop through the elements of array and accumulate the sum
	for (i = 0; i < length; i++)
	{
		sum += ages[i];
	}

	// Calculate the average by dividing the by the length
	avg = sum / length;

	// Print the average:
	printf("The average age is: %.2f", avg);

	return 0;
}

// Other Example:
int main() {
	int ages[] = {20, 22, 18,35, 48, 26, 87, 70};
	int i;
	int length = sizeof(ages) / sizeof(ages[0]);
	int lowestAge = ages[0];

	for (i = 0; i < length; i++) {
		if (lowestAge > ages[i]) {
			lowestAge = ages[i];
		}
	}
	printf ("The lowest age in the array is: %d", lowestAge);

	return 0;
}
