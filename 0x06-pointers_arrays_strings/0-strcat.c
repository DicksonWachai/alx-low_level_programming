#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: character to be concatenated
 * @src: second character to be concatenated
 *
 * Return: the value of concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	l = 0;
	while (dest[i++])
	{
		l++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
