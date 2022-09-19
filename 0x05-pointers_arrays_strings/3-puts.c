#include "main.h"
/**
 * _puts - prints out the string
 * @str: the string to be printed out
 * Return: 0
 */
void _puts(char *str)
{
	char ch;

	char *str = ch;
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
