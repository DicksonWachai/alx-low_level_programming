#include "main.h"
/**
 * print_numbers - prints the numbers
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
}
