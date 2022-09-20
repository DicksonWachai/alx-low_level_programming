#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int length, i;

	length = strlen(s);
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (0);
}
