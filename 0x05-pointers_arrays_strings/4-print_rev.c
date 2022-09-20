#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length, i;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
