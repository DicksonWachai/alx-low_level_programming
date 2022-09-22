#include "main.h"
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
	int i, l;

	i = 0;
	l = 0;
	while (dest[i++])
	{
		l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
