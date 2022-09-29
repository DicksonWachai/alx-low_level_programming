#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
