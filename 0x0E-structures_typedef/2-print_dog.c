#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints details of a dog
 * @d: dog details to be printed
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		print("Owner: %s\n", d->owner);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == NULL)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	if (d == NULL)
	{
		return (0);
	}
}		
