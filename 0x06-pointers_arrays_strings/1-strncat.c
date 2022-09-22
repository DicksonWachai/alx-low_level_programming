#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string to be concatenated
 * @src: source string to be appended
 * @n: number of bytes to be appended
 *
 * Return: Appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destination_length, i;

	destination_length = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[destination_length + i] = src[i];
	}
	return (dest);
}
