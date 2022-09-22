#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest: character to be concatenated
 * @src: second character to be concatenated
 *
 * Return: the value of concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	_putchar('\n');
	return (dest);
}
