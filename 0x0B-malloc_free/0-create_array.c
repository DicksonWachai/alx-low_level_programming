#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of characters 
 * @size: size of array to be initialized
 * @c: specific char to initialize array with
 *
 * Return: function fails return NULL otherwise pointer to array
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
