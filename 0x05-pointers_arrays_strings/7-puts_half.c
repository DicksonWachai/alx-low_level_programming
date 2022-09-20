#include "main.h"
#include <string.h>
/**
 * puts_half - prints half the string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, length_of_the_string;

	length_of_the_string = strlen(str);
	n = (length_of_the_string) / 2;
	while (n != '\0')
	{
		_putchar(*str);
		str++;
	}
}
