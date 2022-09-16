#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times a character should be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar(n * '_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
