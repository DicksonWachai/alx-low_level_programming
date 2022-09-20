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
	while ((i = i + 2))
	{
		_putchar(str[i]);
		i++;
	}
}
