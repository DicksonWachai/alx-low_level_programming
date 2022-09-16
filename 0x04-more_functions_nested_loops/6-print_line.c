#include "main.h"
/**
 * print_line - prints the shortest distance
 * @n: number of times a character is printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
