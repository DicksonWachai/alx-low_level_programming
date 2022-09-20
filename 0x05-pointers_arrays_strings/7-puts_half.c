#include "main.h"
#include <string.h>
/**
 * puts_half - prints half the string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, length_of_the_string, i;

	i = 0;
	length_of_the_string = 0;
	while (str[i++])
	{
		length_of_the_string++;
	}
	if ((length_of_the_string % 2) == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}
	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
