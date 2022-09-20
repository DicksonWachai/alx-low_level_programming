#include "main.h"
/**
 * puts2 - prints every other character
 * @str: characters to be printed
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str == '\\')
		{
			break;
			_putchar(*str);
		}
		str = str + 2;
	}
	_putchar('\n');
}
