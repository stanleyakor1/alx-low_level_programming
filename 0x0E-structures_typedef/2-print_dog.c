#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - prints the struct dog
 *d - pointer to struct
 *
 */

void print_dog(struct dog *d)
{
	if (d -> name)
		printf("Name: %s\n", d -> name);
	else
		printf("Name: %s\n", "(nil)");
	if (d -> age)
		printf("Age: %f\n", d -> age);
	else
		printf("Age: %s\n", "(nil)");
	if (d -> owner)
		printf("Owner: %s\n", d -> owner);
	else
		printf("Owner: %s\n", "(nil)");
}
