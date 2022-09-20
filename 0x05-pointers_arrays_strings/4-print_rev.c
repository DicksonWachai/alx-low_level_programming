#include "main.h"
#include <string.h>
/**
 * print_rev - reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	char temp;
	int l, lind, rind, i;

	l = strlen(s);
	lind = 0;
	rind = l - 1;
	for (i = lind; i < rind; i++)
	{
		temp = s[i];
		s[i] = s[rind];
		s[rind] = temp;
		rind--;
	}
}
