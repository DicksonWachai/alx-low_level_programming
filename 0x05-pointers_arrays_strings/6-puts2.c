#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character
 * @str: characters to be printed
 */
void puts2(char *str)
{
	int i, l;

	i = 0;
	len = 0;
	while (str[i++])
	{
		l++;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
