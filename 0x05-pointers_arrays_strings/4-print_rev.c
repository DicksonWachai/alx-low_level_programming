#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length, i;
	char c;

	length = strlen(s);
	c = *s;
	for (i = length; i >= 0; i--)
	{
		_putchar(c[i]);	
	}
	_putchar('\n');
}
