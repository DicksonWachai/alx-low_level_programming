#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character
 * @str: characters to be printed
 */
void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length - 1; i++)
	{
		_putchar(str[i]);
		str = str + 2;
	}
	_putchar('\n');
}
