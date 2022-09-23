#include "main.h"
/**
 * _strncpy - copies content of string
 * @dest: string destination to be copied to
 * @src: string source to be copied from
 * @n: number of bytes of the source string to be copied
 *
 * Return: Value of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	i = 0;
	len = 0;
	while (src[i++])
	{
		len++;
	}
	for (i = 0; src[i] & i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
