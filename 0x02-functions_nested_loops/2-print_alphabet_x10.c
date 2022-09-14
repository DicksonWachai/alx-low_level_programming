#include "main.h"
/**
 * print_alphabet_x10 - prints in lowercase 10times
 */
void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch * "10");
	}
	_putchar('\n');
}
