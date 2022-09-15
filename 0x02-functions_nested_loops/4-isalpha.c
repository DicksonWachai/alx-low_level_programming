#include "main.h"
/**
 * _isalpha - checks whether character is lowercase or uppercas
 *
 * @c: character to be checked
 *
 * Return: 1 if lowercase or uppercase, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
