#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initializes it with a specific char
 * @size: size of array to be initialized
 * @c: specific char to initialize array with
 *
 * Return: if size is 0 or fucntion fails return NULL otherwise pointer to array
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
