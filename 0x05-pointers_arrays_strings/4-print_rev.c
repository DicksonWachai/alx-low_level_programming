#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	char c;
	int begin, end;

	if (begin >= end)
	{
		return;
	}
	c = *(s + begin);
	*(s + begin) = *(s + end);
	*(s + end) = c;
	_putchar(c);
	_putchar('\n');
}
