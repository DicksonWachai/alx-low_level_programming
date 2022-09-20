#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length, i, temp;

	length = strlen(s);
	for (i = 0; i < length - 1; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		_putchar(*s);
	}
	_putchar('\n');
}
