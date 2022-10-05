#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of characters
 * @size: the size of the array
 * @c: special character to be displayed
 *
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	ptr = (char *) malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
	return (ptr);
}
