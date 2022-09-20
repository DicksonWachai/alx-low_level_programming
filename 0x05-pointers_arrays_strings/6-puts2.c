#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character
 * @str: characters to be printed
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
