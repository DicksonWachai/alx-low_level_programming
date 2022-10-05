#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one to be concatenated
 * @s2: string two to be concatenated
 *
 * Return: NULL or concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int n, i, len;

	i = 0;
	len = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (n = 0; s1[n] || s2[n]; n++)
	{
		len++;
	}
	str = (char *) malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; s1[n]; n++)
	{
		str[i++] = s1[n];
	}
	for (n = 0; s2[n]; n++)
	{
		str[i++] = s2[n];
	}
	return (str);
}
