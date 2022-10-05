#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate characters
 * @str: character to be duplicated
 *
 * Return: NULL or pointer duplicate
 */
char *_strdup(char *str)
{
	char *ptr;
	int n, len;

	len = 0;
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		len++;
	}
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	for (n = 0; str[n]; n++)
	{
		ptr[n] = str[n];
	}
	ptr[len] = '\0';
	return (ptr);
}
