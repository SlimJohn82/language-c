/**
 * Real-Life Example
 * Voici un exemple concret d'utilisation de différents types de données pour calculer et afficher le coût total d'un certain nombre d'articles.
 */

#include <stdio.h>
int main()
{
	// Create variables of different data types.
	int items = 50;
	float cost_per_item = 10.00;
	float total_cost = items * cost_per_item;
	char currency = '$';

	// print variables
	printf("Number of items: %d\n", items);
	printf("Cost per item: %.2f %c\n", cost_per_item);
	printf("Total cost = %.2f %c\n", total_cost, currency);
}
