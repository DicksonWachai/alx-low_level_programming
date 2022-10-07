#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: argument to allocate memory
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		return (98);
	}
	return (mem);
}
