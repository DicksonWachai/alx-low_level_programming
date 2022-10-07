#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes allocated
 *
 * Return: NULL or Concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len, i;

	len = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len++;
	}
	concat = (char *) malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; s1[i]; i++)
	{
		concat[len++] = s1[index];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		concat[len++] = s2[i];
	}
	concat[len] = '\0';
	return (concat);
}
