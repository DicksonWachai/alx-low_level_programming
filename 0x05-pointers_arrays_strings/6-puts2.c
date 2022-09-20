#include "main.h"
/**
 * puts2 - prints every other character
 * @str: characters to be printed
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
