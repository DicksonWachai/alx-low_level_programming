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
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
