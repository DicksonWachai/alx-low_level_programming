#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: character to be chaecked
 *
 * Return: 1 if lowercase, else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
