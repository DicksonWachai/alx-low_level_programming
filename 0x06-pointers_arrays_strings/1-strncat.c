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
	int len, i;

	len = strlen(dest);
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
