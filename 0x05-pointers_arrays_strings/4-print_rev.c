#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length, i;
	char *c;

	length = strlen(s);
	c = s;
	for (i = 0; i < (length - 1); i++)
	{
		_putchar(*s);
		c++;
	}
}
