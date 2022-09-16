#include "main.h"
/**
 * print_square - prints squares
 * @size: size of the square
 */
void print_square(int size)
{
	int n;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
