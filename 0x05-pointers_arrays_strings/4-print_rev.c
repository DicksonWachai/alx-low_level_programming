#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length, i;
	char *begin, *end, t;

	length = strlen(s);
	begin = s;
	end = s;
	for (i = 0; i < (length - i); i++)
	{
		end++;
	}
	for (i = 0; i < (length / 2); i++)
	{
		t = *end;
		*end = *begin;
		*begin = t;
		begin++;
		end--;
	}
}
