#include "main.h"
/**
 * _strlen - returns string length
 * @s: string
 * Return: size of string
 */
int _strlen(char *s)
{
	int ch;

	ch = 0;
	while (*s != '\0')
	{
		ch++;
		s++;
	}
	return (ch);
}
