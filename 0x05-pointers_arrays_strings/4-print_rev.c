#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	strrev(s);
	_putchar(*s);
	_putchar('\n');
}
