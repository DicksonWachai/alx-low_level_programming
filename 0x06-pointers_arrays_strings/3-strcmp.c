#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one to be compared
 * @s2: string two to be compared
 *
 * Return: the difference in ASCII value
 */
int _strcmp(char *s1, char *s2)
{
	int i, value;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		value = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	return (value);
}
