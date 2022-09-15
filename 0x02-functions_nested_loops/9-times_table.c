#include "main.h"
/**
 * times_table - Prints 9 times table
 */
void times_table(void)
{
	int number, multiples, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiples = 1; multiples <= 9; multiples++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiples;
			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
