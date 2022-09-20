#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length, i;
	char *begin_ptr, *end_ptr, ch;

	length = strlen(s);
	begin_ptr = s;
	end_ptr = s;
	for (i = 0; i < length - 1;)
	{
		end_ptr++;
	}
	for (i = 0; i < length / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
	_putchar('\n');
}
