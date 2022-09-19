#include "main.h"
/**
 * _puts - prints out the string
 * @str: the string to be printed out
 * Return: 0
 */
void _puts(char *str)
{
	char ch;

	ch = *str;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
