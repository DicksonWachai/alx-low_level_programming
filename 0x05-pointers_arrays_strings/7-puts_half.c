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
	while (str[i] != '\0')
	{
		i++;
	}
	length_of_the_string = i;
	n = (length_of_the_string) / 2;
	if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
}
